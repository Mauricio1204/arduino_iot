long valor; 
int LED_1 = 2;
void setup() {
  Serial.begin(9600);
  Serial.println("Inicio de sketch - valores del potenciómetro");
  pinMode(LED_1, OUTPUT);
}
void loop() {
  // leemos del pin A5 valor
  valor = analogRead(A5);
  //Imprimimos por el monitor serie
  Serial.print("El valor es = ");
  Serial.println(valor);
  if(valor >= 0 && valor <=455)
  {   digitalWrite(LED_1, HIGH);
       
       }else{
        digitalWrite(LED_1, LOW);
        } 
  }
