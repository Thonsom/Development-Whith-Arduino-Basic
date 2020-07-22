int a = 2;
int b = 3;
int c = 6;
int d = 5;
int e = 4;
int f = 1;
int g = 0;//Hacemos que todas nuestras variables sean salidas

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}
  void escribirDisplay(int va, int vb, int vc, int vd, int ve, int vf, int vg){
  
    digitalWrite(a, va);
    digitalWrite(b, vb);
    digitalWrite(c, vc);
    digitalWrite(d, vd);
    digitalWrite(e, ve);
    digitalWrite(f, vf);
    digitalWrite(g, vg);
  }

  


void loop() {
  //Cero

  escribirDisplay(1,1,1,1,1,1,0);
  /*digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);*/

  delay(1000);
  //Uno

  escribirDisplay(0,1,1,0,0,0,0);
  /*digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);*/

  delay(1000);

  //Dos

  escribirDisplay(1,1,0,1,1,0,1);
 /* digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);*/

  delay(1000);

  //Tres

  escribirDisplay(1,1,1,1,0,0,1);
  /*digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);*/

  delay(1000);

  //Cuatro

  escribirDisplay(0,1,1,0,0,1,1);
  
 /* digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);*/

  delay(1000);

  //Cinco

  escribirDisplay(1,0,1,1,0,1,1);
  
  /*digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);*/

  delay(1000);

  //Seis

  escribirDisplay(1,0,1,1,1,1,1);
  
  /*digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);*/

  delay(1000);

  //Siete

  escribirDisplay(1,1,1,0,0,0,0);
  
  /*digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);*/

  delay(1000);

  //Ocho

  escribirDisplay(1,1,1,1,1,1,1);
    
  /*digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);*/

  delay(1000);

  //Nueve

  escribirDisplay(1,1,1,1,0,1,1);
  
  /*digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);*/

  delay(1000);

}


