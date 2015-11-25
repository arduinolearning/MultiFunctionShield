//*******************************************************************************
//Flashes all LEDs on and off
//*******************************************************************************/
char ledPin =  10; 
char ledPin1 = 11; 
char ledPin2 = 12; 
char ledPin3 = 13; 

void setup()
{
pinMode(ledPin, OUTPUT);
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
}

void loop()
{
digitalWrite(ledPin, HIGH);
digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin2, HIGH);
digitalWrite(ledPin3, HIGH); 
delay(1000);
digitalWrite(ledPin, LOW); 
digitalWrite(ledPin1, LOW);
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
delay(1000); 
}

