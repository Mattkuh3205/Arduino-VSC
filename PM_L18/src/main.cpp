#include <Arduino.h>

//L18: Reading numbers from the serial monitor

int myNumber;
//String ask= "Please enter a number";
String msg1 = "How many times do you want the LED to blink? ";
//String msg2 = "Your number is: ";

int led = 8;

void setup() {
Serial.begin(9600);
pinMode(led, OUTPUT);

}

void loop() {
Serial.println(msg1); //ask

    while(Serial.available()==0){ //wait

    }
   
    myNumber = Serial.parseInt(); //read


    for(int x =1; x<=myNumber; x=x+1){ //this is to repeat how many times your input will blink, ex, myNumber (input) = 5, it'll blink 5 times
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
    }

    //Serial.print(msg2);
    Serial.println(myNumber);
   


}

