#include <Arduino.h>

//Analog Write lesson

int led = 9;
int dark = 0;
int med = 128;
int bright = 255;
int del = 5000;

void setup() {
pinMode(led, OUTPUT);

}

void loop() {
analogWrite(led, dark);
delay(del);

analogWrite(led, med);
delay(del);

analogWrite(led,bright);
delay(del);

analogWrite(led, dark);
exit(0);
}