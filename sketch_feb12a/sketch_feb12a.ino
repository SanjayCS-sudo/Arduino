#define red 13
#define yellow 12
#define green 11
#define red2 10
#define yellow2 9
#define green2 8


void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(green2,OUTPUT);
}
void turnOnLight(int pin,int duration){
  //TURNING OFF ALL THE EXISTING LIGHTS
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);

  //TURNING ON THE LIGHT
  digitalWrite(pin, HIGH);
  if(pin == red){
    digitalWrite(green2, HIGH);
  }
  else if(pin == green){
    digitalWrite(red2,HIGH);
  }
  else if(pin == yellow){
    digitalWrite(yellow2,HIGH);
  } 
  delay(duration);
}
void loop() 
{
  turnOnLight(red,5000);
  turnOnLight(green,5000);
  turnOnLight(yellow,3000);
}