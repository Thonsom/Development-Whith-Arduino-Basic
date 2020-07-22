

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lectura;
  int sonido;
  lectura = analogRead(A0);

  Serial.println(lectura);
  sonido = map(lectura, 400, 1000, 120, 1500);
  tone(9,sonido,5);
  delay(1);
}
