#include <Arduino.h>

//Analog read

int readPin = A0;
int v2 = 0;


void setup() {
pinMode(readPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  v2 = analogRead(readPin);
  Serial.println(v2);
}