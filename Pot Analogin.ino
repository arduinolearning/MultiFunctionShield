
//read in value of pot connected to A0
//value displayed in serial monitor

#define Pot A0    

int PotBuffer = 0;  

void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  PotBuffer = analogRead(Pot);  
  Serial.print("Pot = ");
  Serial.println(PotBuffer);
  delay(500); 
}
