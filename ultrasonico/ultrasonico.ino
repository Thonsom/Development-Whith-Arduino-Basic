int pinTring = 13; //Pin que emite los sonidos, Trig
int pinEcho = 12; //Pin que va a recibir de vuelta la onda
 
int ledRojo = 5; 
int ledVerde = 7; 
 

int zonaSegura = 10;
 
void setup(){
  
  //Inicializamos los pines como entradas y salidas
  pinMode(pinTring, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(pinEcho, INPUT);
  
  Serial.begin(9600); //Inicializamos la comunicacion serial
  
}
 
void loop(){
  
  
  long duracion, distanciaEnCm;
  

  //Algoritmo para enviar un pulso con TRIG
  digitalWrite(pinTring, LOW); // Envía un pulso bajo
  delayMicroseconds(2);       // Espera dos microsegundos
  digitalWrite(pinTring, HIGH);// Envía un pulso alto
  delayMicroseconds(5);       // Espera 5 microsegundos
  digitalWrite(pinTring, LOW); // Se queda en espera
  
  /*Obtenemos la duracion de tiempo mientras
  el sensor este recibiendo la informacion
  */
  duracion = pulseIn(pinEcho, HIGH);
  
  /*
  La velocidad del sonido es de 340metros/segundo que 
  es igual a 29 microsegundos por centimetro es por es
  que vamos a dividir la duracion entre 29. 
  Despues se divide entre 2 porque es el tiempo que viaja
  el sonido de ida y de vuelta
  */
  distanciaEnCm = (duracion/29)/2;
  
  //Imprimimos la distancia en consola
  Serial.print(distanciaEnCm);
  Serial.print("cm");
  Serial.println();
  
  
  if(distanciaEnCm > zonaSegura){
  
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledRojo, LOW);
      
  }
  else{
    
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledRojo, HIGH);
    
  }
  delay(1000);
  
}

