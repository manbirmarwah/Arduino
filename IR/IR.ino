void setup(){
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(9,INPUT);
}


int iR=9;
int a=1;
int b=2;
int c=3;
int d=4;
int e=5;
int f=6;
int g=7;
int n=0;


void notice()
{
  if(n==1){
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
  delay(400);}
  
else if(n==2){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,0);
  digitalWrite(8,1);
  delay(400);}
  
else if(n==3){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,1);
  delay(400);}
  
else if(n==4){
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,1);
  delay(400);}
  
else if(n==5){
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,1);
  delay(400);}
 
else if(n==6){
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,1);
  delay(400);}
 
else if(n==7){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
  delay(400);}
  
else if(n==8){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,1);
  delay(400);}

 else if(n==9){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,1);
  delay(400);}

  else{
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,0);
  }
}


void loop()
{
  int iRr=digitalRead(iR);
  if(iRr==1)
  { n++;
  notice();
  }
  else{
    notice();
  }
}
