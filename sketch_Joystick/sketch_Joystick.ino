int xPin = A0;
int yPin = A1;
int botonPin = 2;

int xPosicion = 0;
int yPosicion = 0;
int botonEstado = 0;

void setup() {
  // inicializar las comunicaciones en serie a 9600 bps:
  Serial.begin(9600); 
  
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);

  //activar  pull-up en el pin pulsador 
  pinMode(botonPin, INPUT_PULLUP); 
  
 
  
}

void loop() {
  xPosicion = analogRead(xPin);
  yPosicion = analogRead(yPin);
  botonEstado = digitalRead(botonPin);
  
  Serial.print("X: ");
  Serial.print(xPosicion);
  Serial.print(" | Y: ");
  Serial.print(yPosicion);
  Serial.print(" | Button: ");
  Serial.println(botonEstado);

  delay(100); 
}
