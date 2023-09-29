//Turns as LED on breadboard for a second, then off for one seconde, repeatedly

//created on Sep 2023
//by Bonnie Zhu

int pin5 = 5;

void setup()
{
  pinMode(pin5, OUTPUT);
}

void loop()
{
  digitalWrite(pin5, HIGH);  
  delay(1000);
  digitalWrite(pin5, LOW);  
  delay(1000);

}