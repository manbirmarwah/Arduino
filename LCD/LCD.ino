#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);

void setup()
{
  lcd.begin(16,2);
}

void loop()
{
  lcd.setCursor(0,1);
  lcd.print("WELCOME");
  lcd.display();
  
  delay(1500);
  lcd.clear();
  lcd.setCursor(1,1);
  lcd.print("Testing LCD...");
  lcd.display();
  delay(1500);
  lcd.clear();
}
  
