#include <Arduino.h>

#include <Servo.h>

int servo1 = 8; //base
int servo2 = 9; //armL
int servo3 = 10; //armR
int angle;
Servo myServo1;
Servo myServo2;
Servo myServo3;


String prompt;

int potPin1 = A0; //base controller
int potPin2 = A1; //arm controller
int readVal1;
int readVal2;

int volt;

void setup() {
Serial.begin(9600); 
myServo1.attach(servo1);
myServo2.attach(servo2);
myServo3.attach(servo3);
}

void loop() {

  readVal1 = analogRead(potPin1);
  readVal2 = analogRead(potPin2);

 for(int x=readVal1; x<=1023;x=x+1){
 myServo1.write(readVal1/5.68);
} 

for(int x=readVal2; x<=1023;x=x+1){
 myServo2.write(readVal2/5.68);
 myServo3.write(readVal2/5.68);

} 

}