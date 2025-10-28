#include <Arduino.h>

int x;

//PM_L16: Fun with for loops

void setup() {
Serial.begin(9600);
}

void loop() {
  /*for(x=1; x<=10;x=x+1){ //1-10 counter
    Serial.print(x);
    Serial.println(". Hello world!"); 
    delay(1000);
  }*/

 /* for(x=5; x<=10;x=x+1){ //5-10 counter
    Serial.print(x);
    Serial.println(". Hello world!"); 
    delay(1000);
  }*/

  //print even numbers
 /* for(x=2; x<=10;x=x+2){ //even numbers only
    Serial.print(x);
    Serial.println(". Hello world!"); 
    delay(1000);
  }*/

  for(x=10; x>=1;x=x-1){ //print backwards from 10
    Serial.print(x);
    Serial.println(". Hello world!"); 
    delay(1000);
  }

 exit(0);
}

