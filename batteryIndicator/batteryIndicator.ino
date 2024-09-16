#define Vinput A0
#define led1 13
#define led2 12
#define led3 11 
#define led4 10

void setup() {
  // put your setup code here, to run once:
  pinMode(Vinput, INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int read = analogRead(Vinput);
  int max_value = 1023;
  
  if(read == max_value)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
  else if(read >= max_value*3/4)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
  }
  else if(read >= max_value/2)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  else if(read >= max_value/4)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  else
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
}