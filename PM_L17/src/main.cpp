#include <Arduino.h>

//PM_L17: While loops

int x; //counter

int led = 7;
int potPin = A0;
int readVal;
int vOut;
int Lout;
int PulseWM;

void setup() {
Serial.begin(9600);

pinMode(led, OUTPUT);
pinMode(potPin, INPUT);
}

void loop() {

  readVal = analogRead(potPin); //serial 0 -1= 1023

  vOut = (5./1023.)*readVal; //voltage = 5/1023 * readVal (0-1023) 1023 * 5/1023 = 5 volts

  //Lout = (255./1023.)*readVal;

 // analogWrite(led, Lout);
  
  //Serial.println(vOut); //voltage

  Serial.println(readVal); //serial value
      delay(1000);


  while(readVal >1000){
    digitalWrite(led, HIGH);
    readVal = analogRead(potPin); //serial 0 -1= 1023
    Serial.println(readVal);
    delay(1000);
  }

  digitalWrite(led, LOW);
  

}

 