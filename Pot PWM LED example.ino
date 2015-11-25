//*******************************************************************************
//Control the brightness of the PWM connected LEDS using the pot
//*******************************************************************************/

int potpin=A0;
int ledpin=13;
int ledpin1=11;
int ledpin2=10;


int val=0;

void setup()
{
Serial.begin(9600);
}

void loop()
{
val=analogRead(potpin);
Serial.println(val); 
analogWrite(ledpin,val/4);  
analogWrite(ledpin1,val/4);  
analogWrite(ledpin2,val/4);  
delay(100);
}

