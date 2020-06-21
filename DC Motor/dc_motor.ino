int M1IN1=11; // motor 1 input 1 from the H-bridge "L298D")
int M1IN2=12; // motor 1 input 2 from (H-bridge "L298D")
int M2IN1=5;  //  motor 2 input 1 from the H-bridge "L298D")
int M2IN2=6; //  motor 2 input 2 from the H-bridge "L298D")
int CSW=10; // rotate both motors clockwise
int CCSW=7; // rotate both motors counterclockwise
int SWIN1;
int SWIN2;
void setup (){
  // Assigning Motor 1 pins as outputs.
pinMode(M1IN1,OUTPUT); 
pinMode(M1IN2,OUTPUT);
  // Assigning Motor 1 pins as outputs.
pinMode(M2IN1,OUTPUT);
pinMode(M2IN2,OUTPUT);
  // Assigning both switches pins as pull up inputs.
pinMode(CSW,INPUT_PULLUP); 
pinMode(CCSW,INPUT_PULLUP); 
}
 

void loop (){
  SWIN1=digitalRead(CSW); // reads the input of the clockwise switch.
  SWIN2=digitalRead(CCSW); //reads the input of the counterclockwise switch.
  if (SWIN1==0){  
   digitalWrite(M1IN1,0);
   digitalWrite(M1IN2,1); 
   digitalWrite(M2IN1,0);
   digitalWrite(M2IN2,1); } // When switch 1 is pressed both motors will circulate clockwise.
  
  
  else if (SWIN2==0){
   digitalWrite(M1IN1,1);
   digitalWrite(M1IN2,0); 
   digitalWrite(M2IN1,1);
   digitalWrite(M2IN2,0); } // When switch 2 is pressed both motors will circulate counter clockwise.
  
  else {
   digitalWrite(M1IN1,0);
   digitalWrite(M1IN2,0); 
   digitalWrite(M2IN1,0);
   digitalWrite(M2IN2,0); } // if non of the switches were pressed the motors will not move.
    
  }
  
