
#include <Wire.h>     // libreria para bus I2C
#include <Adafruit_GFX.h>   // libreria para pantallas graficas
#include <Adafruit_SSD1306.h>   // libreria para controlador SSD1306
 
#define ANCHO 128     // reemplaza ocurrencia de ANCHO por 128
#define ALTO 64       // reemplaza ocurrencia de ALTO por 64

#define OLED_RESET 4      // necesario por la libreria pero no usado
Adafruit_SSD1306 oled(ANCHO, ALTO, &Wire, OLED_RESET);  // crea objeto

void setup() {
  Wire.begin();         // inicializa bus I2C
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C); // inicializa pantalla con direccion 0x3C
}
 
void loop() {
  oled.clearDisplay();        // limpia pantalla
  for(int i=1; i < oled.height()/2; i++) {  // bucle desde 1 hasta alto de pantalla/2
    oled.drawCircle(oled.width()/2, oled.height()/2, i, WHITE);   // dibuja circulo
    oled.display();       // muestra en pantalla todo lo establecido anteriormente 
    delay(250);         // demora de 250 mseg.
  }
}
