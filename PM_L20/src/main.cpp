#include <Arduino.h>

//Lesson 20, understanding RGB LED's
int R = 8;
int G = 9;
int B = 10;

void setup() {
pinMode(R, OUTPUT);
pinMode(G, OUTPUT);
pinMode(B, OUTPUT);

Serial.begin(9600);
}

void loop() {

    Serial.println("Which led do you want to turn on?");

    while(Serial.available()==0){

    }
    String input;

    input = Serial.readString();

    if(input == "red"){
        digitalWrite(R, HIGH);
        digitalWrite(G, LOW);
        digitalWrite(B, LOW);
    }
    if(input == "green"){
        digitalWrite(R, LOW);
        digitalWrite(G, HIGH);
        digitalWrite(B, LOW);
    }
    if(input == "blue"){
        digitalWrite(R, LOW);
        digitalWrite(G, LOW);
        digitalWrite(B, HIGH);
    }

    if(input == "off"){
          digitalWrite(R, LOW);
        digitalWrite(G, LOW);
        digitalWrite(B, LOW);
    }

    if(input == "orange"){
        analogWrite(R, 243);
        analogWrite(G, 114);
        analogWrite(B, 32);
    }
}

