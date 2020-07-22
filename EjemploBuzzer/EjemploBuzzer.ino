int lecturaSensor, nota;

//Array que guarda las frecuencias a reproducir
float frecuencias[] = {
  329.63, // Mi 0
  349.23, // Fa 1
  369.99, // Fa# 2
  392.00, // Sol 3
  415.30, // Sol# 4
  440.00, // La   5
  466.17, // La#  6
  493.83, // Si   7
  523.25, // Do   8
  554.36, // Do#  9
  587.33, // Re 10
  622.25, // Re# 11
  659.26, // Mi  12
};
byte numFrecuencias = 13; //Número de elementos del array
void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT); //Donde está conectado el zumbador
}
void loop() {
  
  tone(9, frecuencias[10]);
  /*Tiempo de reproducción mínimo de la nota */
  delay(1);
  
  tone(9, frecuencias[10]);
  delay(1);
  
  tone(9, frecuencias[3]);
  delay(1);

  tone(9, frecuencias[3]);
  delay(1);
  tone(9, frecuencias[1]);
  delay(1);
  tone(9, frecuencias[0]);
  delay(1);
  tone(9, frecuencias[10]);
  delay(1);
}
