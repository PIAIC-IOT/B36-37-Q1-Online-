const int trigPin = 12; //D5
const int echoPin = 14; //D6
#define LED LED_BUILTIN //D4

#define SOUND_VELOCITY 0.034
#define CM_TO_INCH 0.393701

long duration;
float distanceCm;
float distanceInch;

void setup() {
  Serial.begin(115200);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin,HIGH);

  distanceCm = duration * SOUND_VELOCITY/2;

  distanceInch = distanceCm * CM_TO_INCH;

  Serial.print("Distance: (cm) ");
  Serial.println(distanceCm);

  if(distanceCm <= 20.0){
    digitalWrite(LED,HIGH);
  }

  Serial.print("Distance: (Inch) ");
  Serial.println(distanceInch);
  delay(2000);
  
}
