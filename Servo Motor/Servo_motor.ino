#include <Servo.h>
// object's decleration.
Servo M1; // Motor 1
Servo M2; // Motor 2

int P1; // Motor 1 Potentiometer
int P2; // Motor 2 Potentiometer
int M1P=10; // Assign Motor 1 to pin 10;
int M2P=9; // Assign Motor 1 to pin 9;
void setup(){
 M1.attach(M1P);
 M2.attach(M2P);
}
void loop (){
  // Motor 1:
  P1=analogRead(A0);
  P1=map(P1,0,1023,0,180); // The angle ranges from 0 to 180.
  M1.write(P1);
  // Motor 2:
  P2=analogRead(A1);
  P2=map(P2,0,1023,0,180); // The angle ranges from 0 to 180.
  M2.write(P2);
}
