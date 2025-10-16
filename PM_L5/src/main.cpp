#include <Arduino.h>

//Binary Counter (0-15)

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int del = 1000;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop() {
  digitalWrite(led1, HIGH);
  delay(del);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(del);
  digitalWrite(led2, LOW);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(del);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);

   digitalWrite(led3, HIGH);
   delay(del);
   digitalWrite(led3, LOW);

  digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  delay(del);
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);


  digitalWrite(led3, HIGH);
  digitalWrite(led2, HIGH);

  delay(del);
  digitalWrite(led3, LOW);
    digitalWrite(led2, LOW);


  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(del);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);


  digitalWrite(led4, HIGH);
  delay(del);
  digitalWrite(led4, LOW);

digitalWrite(led4, HIGH);
digitalWrite(led1, HIGH);

  delay(del);
  digitalWrite(led4, LOW);
  digitalWrite(led1, LOW);


digitalWrite(led4, HIGH);
digitalWrite(led2, HIGH);

  delay(del);
  digitalWrite(led4, LOW);
  digitalWrite(led2, LOW);




digitalWrite(led4, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);

  delay(del);
  digitalWrite(led4, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led1, LOW);


digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
  delay(del);
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);




digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led1, HIGH);

  delay(del);
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led1, LOW);

digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);

  delay(del);
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);


digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);

  delay(del);
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
digitalWrite(led1, LOW);

exit(0);

}