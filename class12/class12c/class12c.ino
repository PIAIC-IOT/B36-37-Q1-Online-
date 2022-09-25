#include<ESP8266WiFi.h>

const char* ssid = "TP-LinK-Faheem";
const char* password = "faheem12345";

#include <LiquidCrystal_I2C.h>
#include "DHT.h"
#define DHTTYPE DHT11 
uint8_t DHTPin = D4;

// Initialize DHT sensor.
DHT dht(DHTPin, DHTTYPE);                

float Temperature;
float Humidity;

int Col = 16;
int Row = 2;
LiquidCrystal_I2C lcd(0x27,Col,Row);
void setup() {
  Serial.begin(9600);
  pinMode(DHTPin, INPUT);
  dht.begin();
  lcd.init();
  lcd.backlight();
  Serial.begin(115200);
  Serial.println();
  Serial.println("Connection to Wifi");
  Serial.println(ssid);
  Serial.println();
  WiFi.begin(ssid,password);
  while(WiFi.status() != WL_CONNECTED){
      delay(1000);
      Serial.print("*");    
    }
  Serial.println();
  Serial.println("Wifi Connected");
  Serial.println(WiFi.localIP());
  
  lcd.setCursor(0,0);
  lcd.print(WiFi.localIP()); 
  delay(10000);
  lcd.clear();
  
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("## Temp:");      
  lcd.print(dht.readTemperature());      
  lcd.print(" ##");      
  lcd.setCursor(0,1);
  lcd.print("## Humi:");  
  lcd.print(dht.readHumidity());  
  lcd.print(" ##");      
  delay(1000);
  lcd.clear();
}
