#include <Arduino.h>
//initialise the LED pins
#define LEDPIN1 4
#define LEDPIN2 3
//initialise delay times
const int time1 = 1000;
const int time2 = 2000;

int LDRPIN = A2;

int sensorValue = 0;

//deine the sensor pin --Analog connection


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDPIN1,OUTPUT);
  pinMode(LEDPIN2, OUTPUT);

}

void loop() {
  sensorValue = analogRead(LDRPIN);
  Serial.println(sensorValue);
  digitalWrite(LEDPIN1, HIGH);
  delay(time1);
  digitalWrite(LEDPIN2,HIGH);
  delay(time2);
  digitalWrite(LEDPIN1, LOW);
  delay(time1);
  digitalWrite(LEDPIN2,LOW);
  delay(time2);
  
}