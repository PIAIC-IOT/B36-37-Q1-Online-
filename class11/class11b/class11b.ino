
#include "DHT.h"
#define DHTTYPE DHT11 
uint8_t DHTPin = D4;

// Initialize DHT sensor.
DHT dht(DHTPin, DHTTYPE);                

float Temperature;
float Humidity;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(DHTPin, INPUT);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:  
  Serial.print("Temp: ");
  Serial.println(dht.readTemperature());
  Serial.print("Humidity: ");
  Serial.println(dht.readHumidity());
  delay(2000);
}
