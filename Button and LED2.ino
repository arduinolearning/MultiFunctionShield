//push button A3 and light LED D1
int ledpin=13;
int inpin=A3;
int val;

void setup()
{
pinMode(ledpin,OUTPUT);
pinMode(inpin,INPUT);
}

void loop()
{
val=digitalRead(inpin);
if(val==LOW)          
{ 
digitalWrite(ledpin,LOW);
}
else
{ 
digitalWrite(ledpin,HIGH);
}
}

