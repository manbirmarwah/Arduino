#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void loop()
{
  lcd.setCursor(4,0);
  lcd.print("WELCOME");
  lcd.display();
  delay(3000);
  int Sv,Ss,s,Pa,Pb,Pc,c1,c2,c3;
  int v=digitalRead(Sv,INPUT);
  int c=digitalRead(Ss,INPUT);

  if(v==1 && s==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("*VOTING MODE*");
    lcd.display();
    delay(2000);
    
    int a=digitalRead(Pa,INPUT);
    int b=digitalRead(Pb,INPUT);
    int c=digitalRead(Pc,INPUT);
    
    if(a==1 && b==0 && c==0)
    {
      digitalWrite(13,HIGH);
      delay(2000);
      ++c1;
    }
    else if(a==0 && b==1 && c==0)
    {
      digitalWrite(13,HIGH);
      delay(2000);
      ++c2;
    }
      else if(a==0 && b==0 && c==1)
    {
      digitalWrite(13,HIGH);
      delay(2000);
      c3++;
    }
  }
  else if(s==1 && v==0)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("DISPLAY MODE");
    lcd.display();
    delay(2000);
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("A");
    lcd.setCursor(3,0);
    lcd.print("B");
    lcd.setCursor(5,0);
    lcd.print("C");
    lcd.setCursor(1,1);
    lcd.print(c1);
    lcd.setCursor(3,1);
    lcd.print(c2);
    lcd.setCursor(5,1);
    lcd.print(c3);
    lcd.display();
    delay(5000);
  }
}
    
