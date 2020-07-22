int LED = 13;
int sensorPin = 2;


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(sensorPin, INPUT);
  delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(sensorPin)==LOW){
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
  }
}
