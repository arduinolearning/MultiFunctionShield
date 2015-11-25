//*******************************************************************************
//Switches on all 4 LEDS
//Switches on all segments on 7 segment displays
//*******************************************************************************/
int latchPin = 4;
int clockPin =7;
int dataPin = 8; 
int LED1 =13;
int LED2=12;
int LED3 =11;
int LED4 =10;

unsigned char Dis_table[] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0X80,0X90,0x00};	//Variable LED status display
unsigned char Dis_buf[]   = {0xF1,0xF2,0xF4,0xF8};
void setup ()
{
  
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT); //set output state
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
   pinMode(LED4,OUTPUT);
   LED1=0;
   LED2=0;
   LED3=0;
   LED4=0;

  
}
void loop()
{
  for(char i=0; i<=3; i++)//Four digital scanning
  {
    digitalWrite(latchPin,LOW); 
    shiftOut(dataPin,clockPin,MSBFIRST,Dis_table[10]); 
    shiftOut(dataPin,clockPin,MSBFIRST,Dis_buf[i] ); 						
    digitalWrite(latchPin,HIGH);
    delay(2);		
  }
}
