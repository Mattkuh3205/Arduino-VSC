#include <Arduino.h>

//Analog read

int readPin = A3;
int readVal;
float v2 = 0;
int del = 500;


void setup() {
pinMode(readPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  v2=(5./1023.)*readVal; //how we read voltage
  Serial.println(v2);
  delay(del);
}