#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include<Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#define LED LED_BUILTIN 


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT, &Wire, -1);

const char* ssid = "TP-LinK-Faheem";
const char* password = "faheem12345";

const char *mqtt_broker = "broker.mqttdashboard.com";
const char *topic = "topicLed";
const char *user_name = "test";
const char *user_password = "test";
const int mqtt_port = 1883;

WiFiClient espClient;
PubSubClient client(espClient);
void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  Serial.begin(115200);
  display.begin(SSD1306_SWITCHCAPVCC,0x3C);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print("Connecting..");
  }
  Serial.println("Connected to the WiFi network");
  client.setServer(mqtt_broker,mqtt_port);
  client.setCallback(callback);
  String client_id = "ESP8266" + String(WiFi.macAddress());
  client.connect(client_id.c_str(),user_name,user_password);
  client.subscribe(topic);
}

void loop() {
    
  client.loop();
}

void callback(char *topic, byte *payload, unsigned int length){
  Serial.println("Broker Topic"); 
  Serial.println(topic); 
  Serial.println("Broker Message"); 
 
  display.clearDisplay();  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);  
  for(int i=0; i<length;i++){
      if(payload[i] == '1'){
          display.print("Button is On");   
          digitalWrite(LED,HIGH); 
      }
      else if (payload[i] == '0'){
          display.print("Button is OFF");  
          digitalWrite(LED,LOW);  
      }      
  }  
  display.display();
}
