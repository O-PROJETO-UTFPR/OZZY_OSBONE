#include <Arduino.h>
#include <Servo.h>

static const int servoPin = 25;
int cont = 0;
Servo servo1;

void setup() {
    Serial.begin(9600);
    servo1.attach(servoPin);
    
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
}