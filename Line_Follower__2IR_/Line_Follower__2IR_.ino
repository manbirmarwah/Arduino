#define LS 0
#define MS 1 
#define RS 2
#define BL 6
#define BR 7
#define LM1 8
#define LM2 9
#define RM1 10
#define RM2 11
void setup()
{
pinMode(LS, INPUT);
pinMode(MS, INPUT);
pinMode(RS, INPUT);
pinMode(BL, INPUT);
pinMode(BR, INPUT);
pinMode(LM1, OUTPUT);
pinMode(LM2, OUTPUT);
pinMode(RM1, OUTPUT);
pinMode(RM2, OUTPUT);
}
void loop()
{
if(!(digitalRead(MS)) || (digitalRead(LS) && digitalRead(RS))){
digitalWrite(LM1, HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
}
if((digitalRead(LS) && digitalRead(MS)) || !(digitalRead(RS))){
digitalWrite(LM1, HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, LOW);
digitalWrite(RM2, HIGH);
}
if(!(digitalRead(LS)) || (digitalRead(MS) && digitalRead(RS))){
digitalWrite(LM1, LOW);
digitalWrite(LM2, HIGH);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
}
if(!(digitalRead(BL) && digitalRead(BR))){
digitalWrite(LM1, HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, LOW);
digitalWrite(RM2, HIGH);
}
if(digitalRead(BL) && !(digitalRead(BR))){
digitalWrite(LM1, LOW);
digitalWrite(LM2, HIGH);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
}
  
}


