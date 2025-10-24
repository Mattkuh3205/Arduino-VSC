#include <Arduino.h>

int vout = A0;
int readVal;
int v2;
int del =500;

void setup() {
  Serial.begin(9600);
}

void loop() {
  readVal=analogRead(vout);
 // v2 = (5./1023.)*readVal;

  Serial.println(readVal);
  delay(del);
  
  

}

