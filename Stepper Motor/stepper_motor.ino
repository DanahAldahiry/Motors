#include <Stepper.h>
int spr=32; // stepper motor's steps per round. 32 is the value of step motor (28BYJ-48).
Stepper motor(spr,8,9,10,11);  // definig the object.
void setup() {
motor.setSpeed(400); // the motor's speed.

}

void loop() {
 motor.step(12*spr); // circulates 12*32=384 degree per round
 delay(1000); // 1 sencond delay between each circulation.
 motor.step(-12*spr); // circulates the opposite 12*32=384 degree per round
 delay(3000);

}
