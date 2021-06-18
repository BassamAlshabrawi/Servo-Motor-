#include<Servo.h>
Servo s;
Servo t;
Servo u;
Servo v;
Servo w;
void setup() {
  s.attach(13);
  t.attach(10);
  u.attach(7);
  v.attach(5);
  w.attach(3);
   

}

void loop() {
 s.write (90);
 delay (500);
 t.write (90);
 delay(500);
 u.write (90);
 delay(500);
 v.write (90);
 delay(500);
 w.write (90);
 delay(500);
 
 
 
}
