void setup() {

  char frase1= 'j';
  
  char frase[] = {'E','s','t','a',' ','e','s',' ','u','n','a',' ','f','r','a','s','e','\0'};
  
  
  String frase2 = "Esta es otra frase";
  
  Serial.begin(9600);
  
  delay(2000);

  
  Serial.println(frase1);

  /*for(int a=0; a<frase[a];a++){
    
  Serial.println(frase[a]);
  }*/
  Serial.println(frase);
  
  Serial.println(frase2);
  
  }
  
void loop(){
  
}
