
int rojo=13;      //definimos el valor del pin para el led rojo
int amarillo=12;  //definimos el valor del pin para el led amarillo
int verde=11;     //definimos el valor del pin para el led verde
void setup() {
  // put your setup code here, to run once:
   pinMode(verde,OUTPUT);   //declaramos el pin verde como salida  
  pinMode(amarillo,OUTPUT);//declaramos el pin amarillo como salida
  pinMode(rojo,OUTPUT);    //declaramos el pin rojo como salida  
  


}

void loop() {
 digitalWrite(verde,HIGH); //encendemos el led rojo
 delay(3000);             //esperamos 2 segundos
 digitalWrite(verde,LOW);  //apagamos el led rojo
 delay(500);              //esperamos medio segundo
 
 digitalWrite(amarillo,HIGH); //encendemos el led amarillo
 delay(2000);                 //esperamos 2 segundos
 digitalWrite(amarillo,LOW);  //apagamos el led amarillo
 delay(500);                  //esperamos medio segundo
 
 digitalWrite(rojo,HIGH); //encendemos el led verde
 delay(2000);              //esperamos 2 segundos
 digitalWrite(rojo,LOW);  //apagamos el led verde
 delay(500);               //esperamos medio segundo
  
}
