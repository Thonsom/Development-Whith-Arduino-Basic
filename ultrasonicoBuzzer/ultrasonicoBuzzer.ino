int pinEcho = 12;
int pinTring = 13;

int buzzer = 9;

int minimo = 30;
int maximo = 40;

long duracion, distancia;

int arrayLed[3] = {3, 4, 5};

void setup() {
  Serial.begin(9600);// 9600 baudios
  pinMode(pinEcho, INPUT);
  pinMode(pinTring, OUTPUT);
  pinMode(buzzer, OUTPUT);

  for (int i = 0; i < 3; i++) {
    pinMode(arrayLed[i], OUTPUT);
  }

}

void loop() {

  digitalWrite(pinTring, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTring, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTring, LOW);

  duracion = pulseIn(pinEcho, HIGH);
  distancia = (duracion / 2) / 29; //Distancia en centimetros

  if (distancia <= 2) {
    Serial.println("........");
  } else {
    Serial.print(distancia);
    Serial.println("cm");
  }
  delay(500);

  if (distancia >=30) {

    for (int i = 0; i < 3; i++) {
      digitalWrite(arrayLed[i], HIGH);
      delay(100);
      digitalWrite(arrayLed[i], LOW);
    }

    analogWrite(buzzer, 128) ; //emite sonido
    delay(500);
    analogWrite(buzzer, LOW) ;

  } else {
    for (int i = 3 - 1; i >= 0; i--) {
      digitalWrite(arrayLed[i], HIGH);
      delay(200);
      digitalWrite(arrayLed[i], LOW);
    }

    
  }



}
