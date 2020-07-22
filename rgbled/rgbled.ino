
int redled =9;
int grnled = 10;
int blueled= 11;

void setup() {
  // put your setup code here, to run once:

 pinMode(redled, OUTPUT);
 pinMode(grnled, OUTPUT);
 pinMode(blueled, OUTPUT);

 digitalWrite(redled, HIGH);
 
 digitalWrite(grnled, HIGH);
 
 digitalWrite(blueled, HIGH);
 
}

void loop() {
  digitalWrite(grnled, LOW);
  delay(1000);
  digitalWrite(grnled, HIGH);
  delay(1000);
  digitalWrite(blueled, LOW);
  delay(1000);
  digitalWrite(blueled, HIGH);
  delay(1000);
  digitalWrite(redled, LOW);
  delay(1000);
  digitalWrite(redled, HIGH);
  delay(1000);
  
  

}
