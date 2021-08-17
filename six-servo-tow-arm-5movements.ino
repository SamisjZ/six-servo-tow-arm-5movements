#include <Servo.h> //include servo library

Servo servo1;  // create servo object to control a servo
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int ptpin1 = 0;  // analog pin used to connect the potentiometer


int lastPotValue;   // declare global variables

void setup() {
  // set pin modes
  servo1.attach(3);  // attaches the servo on pin with a pwm
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);
  
  pinMode(ptpin1, INPUT);
  
}

void loop() {
  
  int potValue = analogRead(ptpin1) / 204;    // read analog ptpin1 (1024) divide by 204 to give 5 possible cases
  
  
  if(potValue != lastPotValue) // != meens not equel 
  {
    
    switch(potValue) // possible cases
    {
      case 0:
          servo1.write(60);   // tell servo to go to position in variable 'pos'               
          servo2.write(60);
          servo3.write(60);
          servo4.write(60);
          servo5.write(60);
          servo6.write(60);
           delay(10);
        break;
      case 1:
        servo1.write(160);   // tell servo to go to position in variable 'pos'               
          servo2.write(160);
          servo3.write(160);
          servo4.write(160);
          servo5.write(160);
          servo6.write(160);
      delay(10);
        break;
      case 2:
        servo1.write(120);   // tell servo to go to position in variable 'pos'               
          servo2.write(120);
          servo3.write(120);
          servo4.write(120);
          servo5.write(120);
          servo6.write(120);
      delay(10);
        break;
      case 3:
        servo1.write(105);   // tell servo to go to position in variable 'pos'               
          servo2.write(105);
          servo3.write(105);
          servo4.write(105);
          servo5.write(105);
          servo6.write(105);
      delay(10);
        break;
      case 4:
        servo1.write(60);   // tell servo to go to position in variable 'pos'               
          servo2.write(60);
          servo3.write(60);
          servo4.write(60);
          servo5.write(60);
          servo6.write(60);
      delay(10);
        break;
      default:
        servo1.write(90);   // tell servo to go to position in variable 'pos'               
          servo2.write(90);
          servo3.write(90);
          servo4.write(90);
          servo5.write(90);
          servo6.write(90);
      delay(10);
        break;
    }
    lastPotValue = potValue;
  }
}
