/*===============================*/
/*===This is my first Program====*/
/*===============================*/

int ledPin=8;

void setup()
{
  //initializing pins as outputs
  pinMode(ledPin,OUTPUT);  
}

void loop()
{ //Setting the pin where led is to High for 1000ms.
  digitalWrite(ledPin,HIGH);
  delay(1000);
  //Setting the pin where led is to Low for 1000ms.
  digitalWrite(ledPin,LOW);
  delay(1000);
}

