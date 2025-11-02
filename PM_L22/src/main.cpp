#include <Arduino.h>
#include <Servo.h>

int servo = 8;
int angle;
Servo myServo;
String prompt;

int potPin = A0;
int readVal;
int volt;

void setup() {
Serial.begin(9600); 
myServo.attach(servo);

}

void loop() {

  readVal = analogRead(potPin);

  volt = (5./1023.)*readVal;

 /*  Serial.println("What angle do you want to be at?");

  while(Serial.available()==0){
    //do nothing
  }

  angle = Serial.parseInt(); 
  myServo.write(angle); */

 /*  for(int i =0; i<=180; i = i+1){
    myServo.write(i); //silly mistake was made, we needed to actually write to i instead of angle
    Serial.println(i);
    delay(50);

  }
   for(int i =180; i>=0; i = i-1){
    myServo.write(i);
    Serial.println(i);
    delay(50);
  } */

 Serial.println(readVal);



 
for(int x=readVal; x<=1023;x=x+1){
 myServo.write(readVal/5);
}



}

