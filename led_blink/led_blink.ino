//YouTube|Tech at Home

int led1=13;

void setup() 
{
 //pinMode(pin,mode);
 pinMode(led1,OUTPUT);
  
}

void loop()
{
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);
  
 }
