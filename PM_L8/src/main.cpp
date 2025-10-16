#include <Arduino.h>

//PWM Lesson

int led = 9;
int bright = 255;
int dark = 0;
int med = 128;

void setup() {
pinMode(led, OUTPUT);

}

void loop() {
analogWrite(led, bright);

}