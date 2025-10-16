#include <Arduino.h>

int j=1;
int del = 500;
String MyString = "j = ";

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(MyString + j);
  j=j+1;
  delay(del);
}

