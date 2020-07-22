
int contador = 0;

void setup() {

  // Inicializa la comunicacion serial

  Serial.begin(9600);

  // Envia introduccion

  Serial.println("\n\nEjemplo if");

  Serial.println();

  Serial.println("Empezamos!");

  int i=0;
  while(i<=2){
    Serial.println(contador);

  if (contador++ == 10) {

    Serial.println("Volvemos a empezar");

    contador = 0;
    i++;
  }

  delay(1000);
  }
}

void loop() {

  

}
