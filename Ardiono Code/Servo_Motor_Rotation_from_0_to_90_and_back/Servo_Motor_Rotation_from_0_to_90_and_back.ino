#include <Servo.h> 
 
int servoPin = 3;
int servoPin2 = 5;
int servoPin3 = 7;
int servoPin4= 10;
int servoPin5= 13;


 Servo Servo1, Servo2, Servo3, Servo4, Servo5;
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
Servo2.attach(servoPin2);
Servo3.attach(servoPin3); 
Servo4.attach(servoPin4);
Servo5.attach(servoPin5); 
 
}
void loop(){ 
delay(3000); 
  
Servo1.write(90); 
   
Servo2.write(90); 
    
Servo3.write(90); 
   

Servo4.write(90); 


Servo5.write(90); 
  
delay(3000);
  
Servo1.write(0);
Servo2.write(0);
Servo3.write(0);
Servo4.write(0);
Servo5.write(0);




}
