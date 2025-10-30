#include <Arduino.h>

int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;

int potPin = A0;
int readVal;
int Vout;

String message = "Please select 1-10 for light show: ";
int myNum;

int time;
int number;

int button = 7;

int buttonState =0;

void setup() {
Serial.begin(9600);

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);

pinMode(potPin, INPUT);
pinMode(button, INPUT);

}

void loop() {

  /*Goals
  get UI for a "light show"
  a light show is essentially like fading, alternating, sequencing, etc.....
  I want to be able to use the pot to either increase speed, reverse order, etc....
  */

  // I want to implement this in later for choices
 Serial.println(message);
  while(Serial.available()==0){


  }

  myNum = Serial.parseInt(); //maybe change this to parseInt

Serial.println("How many times do you want the program to loop?");
 while(Serial.available()==0){


  }

  number = Serial.parseInt();
 



  
  readVal = analogRead(potPin); //reads 0-1023 serial signal

  Vout = (5./1023.)*readVal;
  time = Vout;
  //int warning = 200;
   
  buttonState = digitalRead(button);
  
  


  ///////////////////////////////////////////////////////////////////////////////////

  //Light show stuff

  //PWM fade




/////////////////////////////////

  
  readVal = analogRead(potPin); //reads 0-1023 serial signal
  Vout = (5./1023.)*readVal;
  time = Vout;

if(myNum == 1){
for(int i=1; i<=number; i=i+1){
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
}
}

                           
//option 2
if(myNum == 2){

for(int i=1; i<=number; i=i+1){
digitalWrite(led1, HIGH);
digitalWrite(led3, HIGH);
delay(500);
digitalWrite(led1, LOW);
digitalWrite(led3, LOW);
delay(500);
}
}
}//void loop



  





  



