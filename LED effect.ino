//*******************************************************************************
//LED effect
//*******************************************************************************/
int BASE = 10 ;  //The first one LED connected I / O pins
int NUM = 4;   //The total number of LED's

void setup()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT);   //Set the digital I / O pin output
   }
}

void loop()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW);   
     delay(200);       
   }
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, HIGH);    
     delay(200);        
   }  
}

