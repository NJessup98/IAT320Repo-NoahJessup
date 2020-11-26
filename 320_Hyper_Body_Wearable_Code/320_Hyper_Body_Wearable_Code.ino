
#include <Adafruit_CircuitPlayground.h>

#define LDRcon A1

int ledPin = 11;
int analogValue = 0;
int analogValMapped = 0;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
  pinMode(ledPin, OUTPUT);
}

void loop() {
  CircuitPlayground.speaker.enable(false);
  
  analogValue = analogRead(LDRcon);
  analogValMapped = map(analogValue, 0, 1023, 0, 255);

  Serial.println("Analog Reading= ");
  Serial.println(analogValMapped);

  analogWrite(ledPin, analogValMapped);
  
  
  delay(200);

  

  
}
