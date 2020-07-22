int rango= 300;
int vol;

void setup() {
  Serial.begin(9600);

}

void loop() {

  vol= analogRead(A0);

  Serial.println(vol);
  delay(50);
}
