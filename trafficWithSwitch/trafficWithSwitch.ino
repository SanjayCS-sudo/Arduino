#define red 13
#define yellow 12
#define green 11

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {

  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);

  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);

  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);


}
