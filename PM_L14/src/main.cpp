#include <Arduino.h>

int potPin = A0;
int led = 10;
int readVal;
float ledVal;


void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
 readVal = analogRead(potPin);
 
 ledVal = (255./1023.)*readVal;

analogWrite(led, ledVal);
Serial.println(ledVal);


}
