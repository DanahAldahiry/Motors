#include <Servo.h>
Servo motor;
int sensor=3; // ultrasonic sensor's pin number.
long duration;
long height;
void setup()
{
  motor.attach(10);
  Serial.begin(9600);

  
}

void loop()
{
  pinMode(sensor,OUTPUT);
 digitalWrite(sensor,LOW);
  delay(20);
  digitalWrite(sensor,HIGH);
  delay(50);
  digitalWrite(sensor,LOW);
    pinMode(sensor,INPUT);
 duration=pulseIn(sensor,HIGH); // the time taken to sense the soundwave from and back to the sensor.
 height=duration*0.034/2; // the distance between the object and the sensor.
  
  if (height>=116 & height<=120) // for the 20cm^3 box.
    motor.write(0); // the motor will move the box right.
  else if (height>=126 & height<=130) // for the 30cm^3 box.
     motor.write(90); // the motor will move the box to the forward.
    else if (height>=136 & height<=140) // for the 40cm^3 box.
    motor.write(180); // the motor will move the box to the left.
    
}
