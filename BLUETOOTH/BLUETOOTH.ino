
void setup() //The setup function will only run once, after each powerup.It initializes and sets the initial values
{
  Serial.begin(9600);   //Sets the baud for serial data transmission (Bits Per Second) 
}

void loop() 
{
  char data;  //Recived data will get stored in this variable
  if(Serial.available()) //Here We're checking whether data is available or not
  {
    data=Serial.read(); //Data received
    Serial.print(data); 
  }
}
