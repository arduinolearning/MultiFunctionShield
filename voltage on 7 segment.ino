//*******************************************************************************
//Displays the voltage of A0 (pot} on the 7 segment displays
//*******************************************************************************/


int latchPin = 4;
int clockPin =7;
int dataPin = 8;

unsigned char Dis_table[] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0X80,0X90};
unsigned char Dis_buf[]   = {0xF1,0xF2,0xF4,0xF8};
unsigned char disbuff[]  =  {0, 0, 0, 0};
unsigned int  add[65]={0};

int rT=0;
float temp;



void setup ()
{
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
}

void display()
{
  for(char i=0; i<=3; i++)
  {
    digitalWrite(latchPin,LOW);
    if(i==0)
    {
    shiftOut(dataPin,clockPin,MSBFIRST,Dis_table[disbuff[i]]&0x7F);
    }
    else
    shiftOut(dataPin,clockPin,MSBFIRST,Dis_table[disbuff[i]]);
    shiftOut(dataPin,clockPin,MSBFIRST,Dis_buf[i] );                        
    digitalWrite(latchPin,HIGH); 
    delay(2);        
  }
  
}

void loop()
{
  float vol = analogRead(A0)*(4.97 / 1023.0);
  rT= (int)(vol*1000);  
  disbuff[0]= rT/1000;
  disbuff[1]= rT%1000/100;
  disbuff[2]= rT%100/10;
  disbuff[3]= rT%10;
 
  for(char time=0;time<30;time++)
 { 
  display();
 }
}

