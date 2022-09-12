#define Green D1
#define Orange D2
#define Red D5 

void setup() {
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
    delay(3000);
    digitalWrite(Green,LOW);
    Serial.println("LED Orange");
    digitalWrite(Orange,HIGH);
    delay(500);
    digitalWrite(Orange,LOW);
    Serial.println("LED Red");
    digitalWrite(Red,HIGH);
    delay(3000);
    digitalWrite(Red,LOW);  
    Serial.flush(); 
}
