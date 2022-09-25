#include <ESP8266HTTPClient.h>
#include<ESP8266WiFi.h>

const char* ssid = "Branchup";
const char* password = "Secure00123";
WiFiClient client;
String payload;
HTTPClient http;
#define Green D1
#define Yellow D2
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
  
  pinMode(Yellow, OUTPUT);
  digitalWrite(Yellow, LOW);
  
  pinMode(Red, OUTPUT);
  digitalWrite(Red, LOW);
}

void loop() {

 http.begin(client,"b37q1-nodemcu.herokuapp.com",80,"/");
 http.GET();
 payload = http.getString();
 Serial.println(payload);
 if(payload == "red" || payload == "RED"){
      digitalWrite(Red,HIGH);
      digitalWrite(Yellow,LOW);
      digitalWrite(Green,LOW);
 } 
 else if(payload == "yellow" || payload == "YELLOW"){
      digitalWrite(Yellow,HIGH);
      digitalWrite(Red,LOW);
      digitalWrite(Green,LOW);
 } 
 else if(payload == "green" || payload == "GREEN"){
      digitalWrite(Green,HIGH);
      digitalWrite(Yellow,LOW);
      digitalWrite(Red,LOW);
 } 
 else{
      digitalWrite(Green,LOW);
      digitalWrite(Yellow,LOW);
      digitalWrite(Red,LOW);
 }
 http.end(); 
 delay(2000);
}
