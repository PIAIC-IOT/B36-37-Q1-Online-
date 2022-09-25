#include <LiquidCrystal_I2C.h>

int Col = 16;
int Row = 2;
LiquidCrystal_I2C lcd(0x27,Col,Row);
void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Hello world");    
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("Hello world");  
  delay(1000);
  lcd.clear();
}
