#include <Servo.h>

Servo myservo;
int pos = 0;
int irpin = 2;

void setup() {
  myservo.attach(9);
  pinMode(irpin, INPUT);
}

void loop() {
  int irvalue = digitalRead(irpin);
  
  if (irvalue == HIGH) {
    for (pos = 0; pos <= 180; pos += 1) {
      myservo.write(pos);
      delay(15);
    }
    for (pos = 180; pos >=0; pos -=1) {
      myservo.write(pos);
      delay(15);
    }
   }
}