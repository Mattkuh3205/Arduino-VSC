#include <Arduino.h>

//Understanding variables

int led1 = 13;
int led2 = 12;
int led3 = 11;

int s = 100;
int med = 500;
int L= 1000;

void setup() {
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);

}

void loop() {
digitalWrite(led1, HIGH);
delay(s);
digitalWrite(led1, LOW);
delay(s);
digitalWrite(led1, HIGH);
delay(s);
digitalWrite(led1, LOW);
delay(s);
digitalWrite(led1, HIGH);
delay(s);
digitalWrite(led1, LOW);
delay(s);

digitalWrite(led2, HIGH);
delay(med);
digitalWrite(led2, LOW);
delay(med);
digitalWrite(led2, HIGH);
delay(med);
digitalWrite(led2, LOW);
delay(med);
digitalWrite(led2, HIGH);
delay(med);
digitalWrite(led2, LOW);
delay(med);

digitalWrite(led3, HIGH);
delay(L);
digitalWrite(led3, LOW);
delay(L);
digitalWrite(led3, HIGH);
delay(L);
digitalWrite(led3, LOW);
delay(L);
digitalWrite(led3, HIGH);
delay(L);
digitalWrite(led3, LOW);
delay(L);

}int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}