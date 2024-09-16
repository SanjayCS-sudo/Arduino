#define led 13
#define switch A1

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(switch, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int On = analogRead(switch);
  if (On == HIGH) {
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}
