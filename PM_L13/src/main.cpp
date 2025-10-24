#include <Arduino.h>

//if statements

int pot = A0; //this is the pin we're reading from
int readVal; //this is the value we can use to read the voltage from the pot
float v2; //going to calculate the voltage

int led = 10;

//formula: v2 (voltage) = (5./1023.)*readVal

void setup() {
Serial.begin(9600);
pinMode(pot, INPUT);
pinMode(led, OUTPUT);

}

void loop() {
/*Goals
read from pot
convert readVal to voltage using v2
print
*/

readVal = analogRead(pot);
v2 = (5./1023.)*readVal;



Serial.println(v2); 
delay(1000);


//what if we want to warn someone if voltage is over 4 volts?
/* basic if
if(v2>4){
digitalWrite(led, HIGH);
}else{
    digitalWrite(led, LOW);

}*/

/* if ==
*/

if(v2==5){
    digitalWrite(led, HIGH);
}

if(v2!=5){
    digitalWrite(led, LOW);
}
}
