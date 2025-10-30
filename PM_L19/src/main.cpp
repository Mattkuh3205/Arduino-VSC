#include <Arduino.h>

//PM L19: Reading strings from the serial monitor

String myName;
String msg ="What is your name? ";
String msg2 = "Hello ";
String msg3 = ", Welcome to Arduino";
String msgL ="What led do you want to turn on?";
String myLED;

int led1 = 8;
int led2 = 9;
int led3 = 10;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);

Serial.begin(9600);
}

void loop() {
/* //ask
Serial.println(msg);

//wait
while (Serial.available()==0){

}

//read
myName = Serial.readString();
Serial.print(msg2);
Serial.print(myName);

Serial.println(msg3);
 */


 Serial.println(msgL);

//wait
while (Serial.available()==0){

}

//read
myLED = Serial.readString();

if(myLED =="red"){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);

}

if(myLED =="green"){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  


}


if(myLED =="blue"){
   digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);


    

}

if(myLED == "x" || myLED=="X"){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
}



}

