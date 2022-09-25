#include<Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT, &Wire, -1);
void setup() {  
  Serial.begin(115200);
  display.begin(SSD1306_SWITCHCAPVCC,0x3C);
  
}

void loop() {
  for(int x = 0;x<64;x++)
  {
  display.clearDisplay();  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(30,x);
  display.println("Hello World");
  display.display();
  delay(100);
  }
    for(int x = 0;x<128;x++)
  {
  display.clearDisplay();  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(x,32);
  display.println("Hello World");
  display.display();
  delay(100);
  }
}
