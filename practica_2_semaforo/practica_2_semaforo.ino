/** semaforo */
void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);


}

void loop() {
 digitalWrite(13,HIGH);
 delay(5000);
 digitalWrite(13,LOW);
 digitalWrite(12,HIGH);
 for(int i=0;i<10;i++){
 digitalWrite(11,HIGH);
 delay(200);
 digitalWrite(11,LOW);
 delay(500);
 }
 digitalWrite(10,HIGH);
 delay(500);
 digitalWrite(10,LOW);
 digitalWrite(12,LOW);
}
