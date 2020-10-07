#include <Adafruit_CircuitPlayground.h>

int vals[8] = {3,2,0,1,12,6,9,10};
float pitches[8] = {261.626, 293.665, 329.628, 349.228, 391.995, 440.0, 493.883, 523.251};

void setup(){
  Serial.begin(9600);
  CircuitPlayground.begin();

}

void loop() {

 


 for(int i=0;i<8;i++){
    int x = CircuitPlayground.readCap(vals[i]);
    if(x > 600){
  
        CircuitPlayground.setPixelColor(0, 0xFF0000);
        CircuitPlayground.setPixelColor(1, 0x808000);
        CircuitPlayground.setPixelColor(2, 0x00FF00);
        CircuitPlayground.setPixelColor(3, 0x008080);
        CircuitPlayground.setPixelColor(4, 0x0000FF);
        
        CircuitPlayground.setPixelColor(5, 0xFF0000);
        CircuitPlayground.setPixelColor(6, 0x808000);
        CircuitPlayground.setPixelColor(7, 0x00FF00);
        CircuitPlayground.setPixelColor(8, 0x008080);
        CircuitPlayground.setPixelColor(9, 0x0000FF);
        
        CircuitPlayground.playTone(pitches[i], 200); 
        
    }else if (x <500){
       CircuitPlayground.clearPixels();
    }

 }
   
 delay(100);  


}
