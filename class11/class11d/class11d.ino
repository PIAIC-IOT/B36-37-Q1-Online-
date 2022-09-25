#include <ESP8266HTTPClient.h>
#include<ESP8266WiFi.h>

const char* ssid = "TP-LinK-Faheem";
const char* password = "faheem12345";
WiFiClient client;
String payload;
HTTPClient http;

#define Green D1
#define Orange D2
#define Red D5 

void setup() {
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
  
  pinMode(Green, OUTPUT);
  digitalWrite(Green, LOW);
  
  pinMode(Orange, OUTPUT);
  digitalWrite(Orange, LOW);
  
  pinMode(Red, OUTPUT);
  digitalWrite(Red, LOW);
  Serial.begin(115200); 
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(Green,HIGH);
    Serial.println("Green");
    http.begin(client,"b37q1-nodemcu.herokuapp.com",80,"/green/");
    http.GET();
    payload = http.getString();
    Serial.println(payload);
    http.end(); 
    delay(10000);
    
    digitalWrite(Green,LOW);
    Serial.println("LED Orange");
    digitalWrite(Orange,HIGH);
    http.begin(client,"b37q1-nodemcu.herokuapp.com",80,"/yellow/");
    http.GET();
    payload = http.getString();
    Serial.println(payload);
    http.end(); 
    delay(3000);
    

    digitalWrite(Orange,LOW);
    Serial.println("LED Red");
    digitalWrite(Red,HIGH);
    http.begin(client,"b37q1-nodemcu.herokuapp.com",80,"/red/");
    http.GET();
    payload = http.getString();
    Serial.println(payload);
    http.end(); 
    delay(10000);
    digitalWrite(Red,LOW);  
    Serial.flush(); 
}
