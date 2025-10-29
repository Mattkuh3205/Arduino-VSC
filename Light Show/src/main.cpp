#include <Arduino.h>

int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;

int potPin = A0;
int readVal;
int Vout;

String message = "Please select 1-10 for light show: ";
String myNum;

int time;
int number;

void setup() {
Serial.begin(9600);

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);

pinMode(potPin, INPUT);
}

void loop() {

  /*Goals
  get UI for a "light show"
  a light show is essentially like fading, alternating, sequencing, etc.....
  I want to be able to use the pot to either increase speed, reverse order, etc....
  */

  // I want to implement this in later for choices
 Serial.print(message);
  while(Serial.available()==0){


  }

  myNum = Serial.readString(); 

  

  readVal = analogRead(potPin); //reads 0-1023 serial signal

  Vout = (5./1023.)*readVal;
  time = Vout;
  //int warning = 200;
   
  
  
  //Serial.println(readVal);

  ///////////////////////////////////////////////////////////////////////////////////

  //Light show stuff

  //PWM fade
 

if(myNum == "1"){ 
while(true){
  
  readVal = analogRead(potPin); //reads 0-1023 serial signal
  Vout = (5./1023.)*readVal;
  time = Vout;

for(int x = 0; x<=255; x+=5){
    analogWrite(led1, x);
    delay(time);
  }
 for(int x = 255; x>=0; x-=5){
    analogWrite(led1, x);
    delay(time);
  }

for(int x = 0; x<=255; x+=5){
    analogWrite(led2, x);
    delay(time);
  }
for(int x = 255; x>=0; x-=5){
    analogWrite(led2, x);
    delay(time);
  }

    for(int x = 0; x<=255; x+=5){
    analogWrite(led3, x);
    delay(time);
  }
for(int x = 255; x>=0; x-=5){
    analogWrite(led3, x);
    delay(time);
  }

for(int x = 0; x<=255; x+=5){
    analogWrite(led4, x);
    delay(time);
  }
for(int x = 255; x>=0; x-=5){
    analogWrite(led4, x);
    delay(time);
  }
if(readVal <200){
  Serial.println(message);
  while(Serial.available()==0){
    //holds here until user input
  }
  myNum = Serial.readString(); 
  
}
 
      }//while loop



    }//if loop 



}//void loop



  





  



