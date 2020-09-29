
#include <Adafruit_CircuitPlayground.h>

uint8_t pixeln = 0;

void setup() {
 Serial.begin(9600);
 CircuitPlayground.begin();

}

void loop() {
  CircuitPlayground.setPixelColor(pixeln++, CircuitPlayground.colorWheel(25 * pixeln));

  delay(50);

  if(pixeln == 11){
    CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(25 * pixeln));
    CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(25 * pixeln));
    CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(25 * pixeln));
    CircuitPlayground.setPixelColor(3, CircuitPlayground.colorWheel(25 * pixeln));
    CircuitPlayground.setPixelColor(4, CircuitPlayground.colorWheel(25 * pixeln));
    CircuitPlayground.setPixelColor(5, CircuitPlayground.colorWheel(25 * pixeln));
    CircuitPlayground.setPixelColor(6, CircuitPlayground.colorWheel(25 * pixeln));
    CircuitPlayground.setPixelColor(7, CircuitPlayground.colorWheel(25 * pixeln));
    CircuitPlayground.setPixelColor(8, CircuitPlayground.colorWheel(25 * pixeln));
    CircuitPlayground.setPixelColor(9, CircuitPlayground.colorWheel(25 * pixeln)); 
      
  }

  delay(50);

  if(pixeln == 12){
    CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(30 * pixeln));
    CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(30 * pixeln));
    CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(30 * pixeln));
    CircuitPlayground.setPixelColor(3, CircuitPlayground.colorWheel(30 * pixeln));
    CircuitPlayground.setPixelColor(4, CircuitPlayground.colorWheel(30 * pixeln));
    CircuitPlayground.setPixelColor(5, CircuitPlayground.colorWheel(30 * pixeln));
    CircuitPlayground.setPixelColor(6, CircuitPlayground.colorWheel(30 * pixeln));
    CircuitPlayground.setPixelColor(7, CircuitPlayground.colorWheel(30 * pixeln));
    CircuitPlayground.setPixelColor(8, CircuitPlayground.colorWheel(30 * pixeln));
    CircuitPlayground.setPixelColor(9, CircuitPlayground.colorWheel(30 * pixeln)); 
      
  }

  delay(50);

  if(pixeln == 13){
    CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(35 * pixeln));
    CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(35 * pixeln));
    CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(35 * pixeln));
    CircuitPlayground.setPixelColor(3, CircuitPlayground.colorWheel(35 * pixeln));
    CircuitPlayground.setPixelColor(4, CircuitPlayground.colorWheel(35 * pixeln));
    CircuitPlayground.setPixelColor(5, CircuitPlayground.colorWheel(35 * pixeln));
    CircuitPlayground.setPixelColor(6, CircuitPlayground.colorWheel(35 * pixeln));
    CircuitPlayground.setPixelColor(7, CircuitPlayground.colorWheel(35 * pixeln));
    CircuitPlayground.setPixelColor(8, CircuitPlayground.colorWheel(35 * pixeln));
    CircuitPlayground.setPixelColor(9, CircuitPlayground.colorWheel(35 * pixeln)); 
      
  }

  delay(50);

  if(pixeln == 14){
    CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(40 * pixeln));
    CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(40 * pixeln));
    CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(40 * pixeln));
    CircuitPlayground.setPixelColor(3, CircuitPlayground.colorWheel(40 * pixeln));
    CircuitPlayground.setPixelColor(4, CircuitPlayground.colorWheel(40 * pixeln));
    CircuitPlayground.setPixelColor(5, CircuitPlayground.colorWheel(40 * pixeln));
    CircuitPlayground.setPixelColor(6, CircuitPlayground.colorWheel(40 * pixeln));
    CircuitPlayground.setPixelColor(7, CircuitPlayground.colorWheel(40 * pixeln));
    CircuitPlayground.setPixelColor(8, CircuitPlayground.colorWheel(40 * pixeln));
    CircuitPlayground.setPixelColor(9, CircuitPlayground.colorWheel(40 * pixeln)); 
      
  }

  delay(50);

  if(pixeln == 15){
    CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(45 * pixeln));
    CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(45 * pixeln));
    CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(45 * pixeln));
    CircuitPlayground.setPixelColor(3, CircuitPlayground.colorWheel(45 * pixeln));
    CircuitPlayground.setPixelColor(4, CircuitPlayground.colorWheel(45 * pixeln));
    CircuitPlayground.setPixelColor(5, CircuitPlayground.colorWheel(45 * pixeln));
    CircuitPlayground.setPixelColor(6, CircuitPlayground.colorWheel(45 * pixeln));
    CircuitPlayground.setPixelColor(7, CircuitPlayground.colorWheel(45 * pixeln));
    CircuitPlayground.setPixelColor(8, CircuitPlayground.colorWheel(45 * pixeln));
    CircuitPlayground.setPixelColor(9, CircuitPlayground.colorWheel(45 * pixeln)); 
      
  }
  delay(50);

  if(pixeln == 16){
    CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(50 * pixeln));
    CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(50 * pixeln));
    CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(50 * pixeln));
    CircuitPlayground.setPixelColor(3, CircuitPlayground.colorWheel(50 * pixeln));
    CircuitPlayground.setPixelColor(4, CircuitPlayground.colorWheel(50 * pixeln));
    CircuitPlayground.setPixelColor(5, CircuitPlayground.colorWheel(50 * pixeln));
    CircuitPlayground.setPixelColor(6, CircuitPlayground.colorWheel(50 * pixeln));
    CircuitPlayground.setPixelColor(7, CircuitPlayground.colorWheel(50 * pixeln));
    CircuitPlayground.setPixelColor(8, CircuitPlayground.colorWheel(50 * pixeln));
    CircuitPlayground.setPixelColor(9, CircuitPlayground.colorWheel(50 * pixeln)); 
      
  }
  delay(50);

  if(pixeln == 17){
    CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(55 * pixeln));
    CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(55 * pixeln));
    CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(55 * pixeln));
    CircuitPlayground.setPixelColor(3, CircuitPlayground.colorWheel(55 * pixeln));
    CircuitPlayground.setPixelColor(4, CircuitPlayground.colorWheel(55 * pixeln));
    CircuitPlayground.setPixelColor(5, CircuitPlayground.colorWheel(55 * pixeln));
    CircuitPlayground.setPixelColor(6, CircuitPlayground.colorWheel(55 * pixeln));
    CircuitPlayground.setPixelColor(7, CircuitPlayground.colorWheel(55 * pixeln));
    CircuitPlayground.setPixelColor(8, CircuitPlayground.colorWheel(55 * pixeln));
    CircuitPlayground.setPixelColor(9, CircuitPlayground.colorWheel(55 * pixeln)); 
      
  }
  delay(50);

  if(pixeln == 18){
    CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(60 * pixeln));
    CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(60 * pixeln));
    CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(60 * pixeln));
    CircuitPlayground.setPixelColor(3, CircuitPlayground.colorWheel(60 * pixeln));
    CircuitPlayground.setPixelColor(4, CircuitPlayground.colorWheel(60 * pixeln));
    CircuitPlayground.setPixelColor(5, CircuitPlayground.colorWheel(60 * pixeln));
    CircuitPlayground.setPixelColor(6, CircuitPlayground.colorWheel(60 * pixeln));
    CircuitPlayground.setPixelColor(7, CircuitPlayground.colorWheel(60 * pixeln));
    CircuitPlayground.setPixelColor(8, CircuitPlayground.colorWheel(60 * pixeln));
    CircuitPlayground.setPixelColor(9, CircuitPlayground.colorWheel(60 * pixeln)); 
      
  }
  delay(50);

  if(pixeln == 19){
    CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(65 * pixeln));
    CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(65 * pixeln));
    CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(65 * pixeln));
    CircuitPlayground.setPixelColor(3, CircuitPlayground.colorWheel(65 * pixeln));
    CircuitPlayground.setPixelColor(4, CircuitPlayground.colorWheel(65 * pixeln));
    CircuitPlayground.setPixelColor(5, CircuitPlayground.colorWheel(65 * pixeln));
    CircuitPlayground.setPixelColor(6, CircuitPlayground.colorWheel(65 * pixeln));
    CircuitPlayground.setPixelColor(7, CircuitPlayground.colorWheel(65 * pixeln));
    CircuitPlayground.setPixelColor(8, CircuitPlayground.colorWheel(65 * pixeln));
    CircuitPlayground.setPixelColor(9, CircuitPlayground.colorWheel(65 * pixeln)); 
      
  }
  delay(50);

  if(pixeln == 20){
    CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(70 * pixeln));
    CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(70 * pixeln));
    CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(70 * pixeln));
    CircuitPlayground.setPixelColor(3, CircuitPlayground.colorWheel(70 * pixeln));
    CircuitPlayground.setPixelColor(4, CircuitPlayground.colorWheel(70 * pixeln));
    CircuitPlayground.setPixelColor(5, CircuitPlayground.colorWheel(70 * pixeln));
    CircuitPlayground.setPixelColor(6, CircuitPlayground.colorWheel(70 * pixeln));
    CircuitPlayground.setPixelColor(7, CircuitPlayground.colorWheel(70 * pixeln));
    CircuitPlayground.setPixelColor(8, CircuitPlayground.colorWheel(70 * pixeln));
    CircuitPlayground.setPixelColor(9, CircuitPlayground.colorWheel(70 * pixeln)); 
      
  }

  delay(50);

  if(pixeln == 21){
    CircuitPlayground.setPixelColor(0, 255, 0, 0);
    CircuitPlayground.setPixelColor(1, 255, 0, 0);
    CircuitPlayground.setPixelColor(2, 255, 0, 0);
    CircuitPlayground.setPixelColor(3, 255, 0, 0);
    CircuitPlayground.setPixelColor(4, 255, 0, 0);
    CircuitPlayground.setPixelColor(5, 255, 0, 0);
    CircuitPlayground.setPixelColor(6, 255, 0, 0);
    CircuitPlayground.setPixelColor(7, 255, 0, 0);
    CircuitPlayground.setPixelColor(8, 255, 0, 0);
    CircuitPlayground.setPixelColor(9, 255, 0, 0);
      
  }

  delay(50);

  if(pixeln > 22){
    pixeln = 0;
    CircuitPlayground.clearPixels();
  
  }

  delay(50);

  

}
