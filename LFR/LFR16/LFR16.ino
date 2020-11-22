#define L 7
#define C 6  
#define R 5

int l,c,r,s;

#define LMR 9
#define LMB 8
#define RMR 10
#define RMB 11

void setup()
{
    pinMode(L,INPUT);
    pinMode(C,INPUT);
    pinMode(R,INPUT);
    
    pinMode(LMR,OUTPUT);
    pinMode(LMB,OUTPUT);
    pinMode(RMR,OUTPUT);
    pinMode(RMB,OUTPUT);
   
}

void forward()
{
  digitalWrite(LMR,HIGH);
  digitalWrite(LMB,LOW);
  digitalWrite(RMR,HIGH);
  digitalWrite(RMB,LOW);
}

void left()
{
  digitalWrite(LMR,LOW);
  digitalWrite(LMB,LOW);
  digitalWrite(RMR,HIGH);
  digitalWrite(RMB,LOW);
}

void right()
{
  digitalWrite(LMR,HIGH);
  digitalWrite(LMB,LOW);
  digitalWrite(RMR,LOW);
  digitalWrite(RMB,LOW);
}

void back()
{ 
  digitalWrite(LMR,LOW);
  digitalWrite(LMB,HIGH);
  digitalWrite(RMR,LOW);
  digitalWrite(RMB,HIGH);
}



void loop()
{
   l=digitalRead(L);
   c=digitalRead(C);
   r=digitalRead(R);
   
   s=(4*l)+(2*c)+r;
   
   if(s==1)
   {
       left();
       delay(100);
   }
   else if(s==3)
   {
       left();
   }
   else if(s==4||s==6)
   {
       right();
   }
   else if(s==5)
   {
       forward();
   }
   else if(s==0)
   {
      left();
      delay(200);
   }
   else
   {
     back();
   }
   
}
