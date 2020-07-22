int pinLed = 10;
int SensorPin = 2;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(SensorPin, INPUT);
  digitalWrite(pinLed, LOW);

}

void loop() {
  if (digitalRead(SensorPin) == HIGH) {
    
    if (digitalRead(pinLed) == LOW) {
      digitalWrite(pinLed, HIGH);
      delay(100);
    } else {
      digitalWrite(pinLed, LOW);
      delay(100);
    }
    
  }
}
