
#define DHTTYPE DHT22 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
dht.begin();
int relayPin = 3;
int ledPin
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);

  float t = dht.readTemperature();

  switch(t){
    case (t<25):

    digitalWrite(relayPin, HIGH);
    digitalWrite(ledPin, HIGH);

    break;

    case (t>25):

    digitalWrite(relayPin, LOW);
    digitalWrite(ledPin, LOW);
    
    break;

    default:

    for(int i = 0; i < 10; i++){
          
    digitalWrite(relayPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(relayPin, LOW);
    digitalWrite(ledPin, LOW);
    delay(500);


    }

    break;
  }
}
