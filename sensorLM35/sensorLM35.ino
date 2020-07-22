
int LED[5] = {2, 3, 4, 5, 6};
int sensorPin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i < 5; i++) {
    pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  int val = analogRead(sensorPin);
  Serial.println(val);

  for (int i = 0; i < 5; i++) {
    digitalWrite(LED[i], LOW);
  }

  if (val > 40 && val < 45) { // 20 - 22 C
    digitalWrite( LED[0], HIGH);
  } else if (val > 45 && val < 49) { // 22 - 24 C
    digitalWrite( LED[0], HIGH);
    digitalWrite( LED[1], HIGH);
  } else if (val > 49 && val < 53) { // 24 - 26 C
    digitalWrite( LED[0], HIGH);
    digitalWrite( LED[1], HIGH);
    digitalWrite( LED[2], HIGH);
  } else if (val > 53 && val < 57) { // 26 - 28 C
    digitalWrite( LED[0], HIGH);
    digitalWrite( LED[1], HIGH);
    digitalWrite( LED[2], HIGH);
    digitalWrite( LED[3], HIGH);
  } else if (val > 57) { // Over 28 C
    digitalWrite( LED[0], HIGH);
    digitalWrite( LED[1], HIGH);
    digitalWrite( LED[2], HIGH);
    digitalWrite( LED[3], HIGH);
    digitalWrite( LED[4], HIGH);
  }
  delay(100);

}
