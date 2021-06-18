#include <Servo.h>

Servo s;

Servo t;

Servo u;

Servo v;

Servo w;



int potpin = 0;
int potpin2 = 1;
int potpin3 = 2;
int potpin4 = 3;
int potpin5 = 4;

int val = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;


void setup()
{

  s.attach(13);  // attaches the servo on pin 13 to the servo object
  t.attach(10);
  u.attach(7);
  v.attach(5);
  w.attach(3);
}

void loop()
{

val = analogRead(potpin);
val = map(val, 3, 1023, 0, 176);

s.write(val);

delay(25);

val2 = analogRead(potpin2);
val2 = map(val2, 0, 1023, 0, 180);

t.write(val2);

delay(25);

val3 = analogRead(potpin3);
val3 = map(val3, 0, 1023, 0, 180);

u.write(val3);

delay(25);

val4 = analogRead(potpin4);
val4 = map(val4, 0, 1023, 0, 180);

v.write(val4);

delay(25);

val5 = analogRead(potpin5);
val5 = map(val5, 0, 1023, 0, 180);

w.write(val5);

delay(25);

}
