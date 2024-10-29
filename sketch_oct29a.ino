#include <Adafruit_CircuitPlaground.h>


let value
void setup() {
  // put your setup code here, to run once:
 CircuitPlayground.begin();
 Serial,begin(9600)
}

void loop() {
  // put your main code here, to run repeatedly:
value = analogRead(A3) 
delay(500)

}
