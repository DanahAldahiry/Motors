int RI=6; // Relay's pin.
void setup()
{
  pinMode(RI, OUTPUT); // Assign the pin as an output pin.

}

void loop()
{
  digitalWrite(RI,1); // circulates counter clockwise.
  delay(5000); // keeps runnig for 5 sec.
  digitalWrite(RI,0); // motor circulates clockwise.
delay(5000); // keeps runnig for 5 sec.
}
