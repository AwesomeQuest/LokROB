#include "DHT.h"

#define DHTPIN 2

int relayPin = 8;
float startTemp = 0.0;

#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  Serial.begin(9600);
  Serial.println("DHTxx test!");

  dht.begin();
  pinMode(relayPin, OUTPUT);
  startTemp = dht.readTemperature();
  onTimer(startTemp);
}
void onTimer(float a) {
  unsigned long timeS = millis();
  unsigned long timeM;

  do {
    timeM = millis();
    digitalWrite(relayPin, LOW);

  } while (timeS - (timeM - (a * 100)) > 0);

  digitalWrite(relayPin, HIGH);

}


void loop() {
  delay(2000);

  float t = dht.readTemperature();

  if (t > startTemp) {
    onTimer((t - startTemp));
  }


}
