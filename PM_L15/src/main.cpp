#include <Arduino.h>
//Understanding for loops

int led1 = 6;
int led2 = 9;
int del = 500;

int blink1 = 3;
int blink2 = 5;
int x;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
Serial.begin(9600); 
}

void loop() {
  for(x=1; x <= blink1; x=x+1){
  digitalWrite(led1, HIGH);
  delay(del);
  digitalWrite(led1, LOW);
  delay(del);                   
  }
  /////////////////////////////////////////////////////
for(x=1; x <= blink2; x=x+1){
  digitalWrite(led2, HIGH);
  delay(del);
  digitalWrite(led2, LOW);
  delay(del);
}
  exit(0);
}
