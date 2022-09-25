#include<Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(115200);
  Serial.println("Scanner");

}

void loop() {
 byte error, address;
 int nDevices;
  Serial.println("Scan Start...");
  nDevices = 0;
  for(address = 1;address < 127; address++){
      Wire.beginTransmission(address);
      error = Wire.endTransmission();
      if (error == 0){
          Serial.println("Device found");
          Serial.println(address,HEX);
          nDevices++;
        }
    }
  delay(5000);
}
