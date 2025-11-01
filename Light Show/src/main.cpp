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

  //prints out first message
  Serial.println(message);
  while(Serial.available()==0){
    //hold here for input
  }
  myNum = Serial.parseInt(); 

/////////////////////////////////////////////////////////////////////


 Serial.println("How many times do you want the program to loop?");
 while(Serial.available()==0){
    //hold here for input
  }
  number = Serial.parseInt();
 
 ////////////////////////////////////////////////////////////////////////////////////
  
  readVal = analogRead(potPin); //reads 0-1023 serial signal

  Vout = (5./1023.)*readVal;
  time = Vout; //with any of the loops with delay as time, the potentiometer controls the speed of it
  //thinking about adding in a fail safe to where if the pot reaches a certain number, it will stop, and ask for another input
   
  buttonState = digitalRead(button); //may implement this later
  

  ///////////////////////////////////////////////////////////////////////////////////

  //Light show stuff

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
//need a way to deal with infinite loops without using while
//////////////////////////////////////////////////////////////////////////////////
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

digitalWrite(led2, HIGH);
digitalWrite(led4, HIGH);
delay(500);
digitalWrite(led2, LOW);
digitalWrite(led4, LOW);
delay(500);
}
}

/////////////////////////////////
//option 3

if(myNum == 3){
  for(int i=1; i<=number; i=i+1){
  digitalWrite(led1, HIGH);
  delay(200); //placeholder value (need to implement something)
  digitalWrite(led1, LOW);
  delay(200);
  digitalWrite(led2, HIGH);
  delay(200);
  digitalWrite(led2, LOW);
  delay(200);
  digitalWrite(led3, HIGH);
  delay(200);
  digitalWrite(led3, LOW);
  delay(200);
  digitalWrite(led4, HIGH);
  delay(200);
  digitalWrite(led4, LOW);
  delay(200);  
}
}

 


}//void loop



  





  



