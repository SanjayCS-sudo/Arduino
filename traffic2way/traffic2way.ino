#define red 13
#define yellow 12
#define green 11
#define red2 10 
#define yellow2 9 
#define green2 8

void setup(){
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(green2, OUTPUT);
}
void loop(){
  digitalWrite(red,HIGH);digitalWrite(green2,HIGH);
  delay(1000);
  digitalWrite(red,LOW);digitalWrite(green2,LOW);
  digitalWrite(green,HIGH);digitalWrite(red2,HIGH);
  delay(1000);
  digitalWrite(green,LOW);digitalWrite(red2,LOW);
  digitalWrite(yellow,HIGH); digitalWrite(yellow2,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW); digitalWrite(yellow2,LOW);
}