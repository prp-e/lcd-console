#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  Serial.println("Welcome!");
  Serial.println("This is Muhammadreza Haghiri's simple console!");
  Serial.println("Type some messages here, and see that on your LCD!");
  Serial.println("Designed for LCD & Keypad Shield"); 
  Serial.println("=====================\n");
  lcd.begin(16, 2); 
  lcd.print("LCD Console 0.1");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 1);
  lcd.print("> ");
  if(Serial.available()){
    Serial.println("SUCCESS");
    lcd.setCursor(2, 1);
    lcd.print(Serial.readString());
    }
 

}
