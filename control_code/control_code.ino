//Defines and includes the necessary libraries 

#include "DHT.h"

#define DHTPIN 2

#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

//Defines the necessary values needed
int relayPin = 8;
float startTemp = 0.0;

void setup() {
  
  dht.begin();
  pinMode(relayPin, OUTPUT);
  //Gets the starting temperature
  startTemp = dht.readTemperature();
  //Heats element
  onTimer(startTemp);
}
//This function takes the time based on when it started 
//and compares that time to the current time and heats
//the element for the appropriate time
void onTimer(float a) {
  unsigned long timeS = millis();
  unsigned long timeM;

  do {
    timeM = millis();
    digitalWrite(relayPin, LOW);

  } while (timeS - (timeM - (a * 1000)) > 0);

  digitalWrite(relayPin, HIGH);

}

//This code checks the current temperature and 
//compares it to the starting temperature 
//and activates the relay appropriately
void loop() {
  delay(10000);
  //Check current temp
  float t = dht.readTemperature();
  //Compares current temp
  if (t > startTemp) {
    onTimer((t - startTemp));
    startTemp = t;
  }


}
