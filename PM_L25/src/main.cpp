#include <Arduino.h>


int button = 8;
int led = 9;
int buttonStateOld =1; //wasnt pressed
int buttonState=1; //first time button isnt pressed

int ledState=0; //led is off

void setup() {
Serial.begin(9600);
pinMode(button, INPUT);
pinMode(led, OUTPUT);
}

void loop() {
buttonState = digitalRead(button);

if(buttonStateOld==0 && buttonState==1){
if(ledState == 0){ //pressed
    digitalWrite(led, HIGH);
}
if(ledState == 1){ //not pressed
    digitalWrite(led, LOW);
}
ledState=!ledState;
}
buttonStateOld=buttonState;
}

