int ledPin = 13;
int pirPin = 2;
int buzzer = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {

  int value = digitalRead(pirPin);
  //Serial.println(value);
  if (value == HIGH) {
    digitalWrite(ledPin, HIGH);
    analogWrite(buzzer, 128);
    delay(1000);

    analogWrite(buzzer, 90);
    delay(1000);
    analogWrite(buzzer, LOW);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
