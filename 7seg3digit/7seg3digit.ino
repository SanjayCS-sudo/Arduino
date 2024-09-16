#include"SevSeg.h"
SevSeg sevseg;

void setup(){
  byte numDigits =3;
  byte digitPins[] = {10,11,12};
  byte segmentsPins[] = {2,3,4,5,6,7,8,};
  bool resistorOnSegment = false;
  bool updateWithDisplay = false;
  bool leadingZeros = false;
  bool disableDecPoint = true;

  sevseg.begin(COMMON_ANODE, numDigits,digitPins, segmentsPins, resistorOnSegment, updateWithDisplay, leadingZeros,disableDecPoint);
  sevseg.setBrightness(200);
}
void loop(){
  static unsigned long Prevmillis =0;
  static int count =0;
  unsigned long currentmillis = millis();
  if (currentmillis - Prevmillis >= 1000){
    Prevmillis = currentmillis;
    count++;
    if(count > 99)
    count = 0;
    sevseg.setNumber(count,0);
  }
  sevseg.refreshDisplay();
}