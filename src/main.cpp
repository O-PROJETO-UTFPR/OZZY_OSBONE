#include <Arduino.h>
#include <Servo.h>

static const int servoPin = 26; 
static const int servoPinA = 25; 
static const int servoPinB = 33; 



//25, 33 
int cont = 0;
Servo servo1;

void setup() {
    Serial.begin(9600);
    servo1.attach(servoPin);
    servoA.attach(servoPinA);
    servoB.attach(servoPinB);
    
}

void loop() {
    for(int posDegrees = 130; posDegrees <= 170; posDegrees++) {
        servo1.write(posDegrees);
        Serial.println(posDegrees);
        delay(10);
    }
    while (cont <11){
        for(int posDegrees = 160; posDegrees >= 130; posDegrees--) {
           servo1.write(posDegrees);
           Serial.println(posDegrees);
           delay(5);
        }

        for(int posDegrees = 160; posDegrees <= 170; posDegrees++) {
            servo1.write(posDegrees);
            Serial.println(posDegrees);
           delay(5);
         }
         cont ++;
    }
    for(int posDegrees = 170; posDegrees >= 130; posDegrees--) {
        servo1.write(posDegrees);
        Serial.println(posDegrees);
        delay(10);
    }
    cont = 0;


    for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
    servoA.write(posDegrees);
    .println(posDegrees);
    delay(20);
    }

    for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
        servoA.write(posDegrees);
        Serial.println(posDegrees);
        delay(20);
    }

       for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
        servoB.write(posDegrees);
        Serial.println(posDegrees);
        delay(20);
    }

    for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
        servoB.write(posDegrees);
        Serial.println(posDegrees);
        delay(20);
    }
}