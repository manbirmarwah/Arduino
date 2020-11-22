int iRL=10;
int iRM=9;
int iRR=8;
int ML0=2;
int ML1=1;
int MR0=3;
int MR1=4;

void setup(){
pinMode(iRL,INPUT);
pinMode(iRM,INPUT);
pinMode(iRR,INPUT);
pinMode(ML0,OUTPUT);
pinMode(ML1,OUTPUT);
pinMode(MR0,OUTPUT);
pinMode(MR1,OUTPUT);
}

void loop()
{
int a=digitalRead(iRL);
int b=digitalRead(iRM);
int c=digitalRead(iRR);

if(a==1 && b==0 && c==1)
{
  digitalWrite(ML0,0);
  digitalWrite(ML1,1);
  digitalWrite(MR0,0);
  digitalWrite(MR1,1);
}

if(a==0 && b==0 && c==1)
{ 
  digitalWrite(ML0,0);
  digitalWrite(ML1,0);
  digitalWrite(MR0,0);
  digitalWrite(MR1,1);
}
if(a==0 && b==0 && c==1)
{ 
  digitalWrite(ML0,0);
  digitalWrite(ML1,1);
  digitalWrite(MR0,0);
  digitalWrite(MR1,0);
}
}
