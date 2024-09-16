#include<Keypad.h>
#include<LiquidCrystal.h>

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad''

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

const int rs = 12, en = 11, d4 = 0, d5 = 1, d6 = 9, d7 = 10;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:  
  char key = keypad.getKey();
  if(key){
    lcd.print(key);
     }
  if(key == '#'){
    lcd.clear();
  }

}
