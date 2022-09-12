#include<ESP8266WiFi.h>
#define Green D1
#define Orange D2
#define Red D5 

const char* ssid = "TP-LinK-Faheem";
const char* password = "faheem12345";
String text = "";
WiFiServer server(80);

void setup() {
  Serial.begin(115200);

  pinMode(Green, OUTPUT);
  digitalWrite(Green, LOW);
  
  pinMode(Orange, OUTPUT);
  digitalWrite(Orange, LOW);
  
  pinMode(Red, OUTPUT);
  digitalWrite(Red, LOW);


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
  server.begin();
}


void loop() {
    WiFiClient client = server.available();
    String req = client.readStringUntil('\r');
    client.flush();
    client.println("Demo");    
  // put your main code here, to run repeatedly:
    digitalWrite(Green,HIGH);
    Serial.println("LED Green");
    
    Serial.println(req);
    client.flush();
    client.println("Green");
       
    delay(10000);
    digitalWrite(Green,LOW);
    Serial.println("LED Orange");
    digitalWrite(Orange,HIGH);
    
    Serial.println(req);
    client.flush();
    client.println("Orange");   
   
    delay(5000);
    digitalWrite(Orange,LOW);
    Serial.println("LED Red");
    digitalWrite(Red,HIGH);
    
    Serial.println(req);
    client.flush();
    client.println("Red");
    
    delay(10000);
    digitalWrite(Red,LOW);   
}
