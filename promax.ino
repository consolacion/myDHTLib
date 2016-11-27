/*

  https://github.com/sui77/rc-switch/

some extra decimals
A 40025046 ON
A 38856910 OFF
B 41567385 ON
B 39916253 OFF
C 240760633 ON
C 240257549 OFF
D 105444762 ON
D 107879350 OFF
A 40410462 ON
A 39172218 OFF
*/

#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

  Serial.begin(9600);

  // Transmitter is connected to Arduino Pin #10  
  mySwitch.enableTransmit(10);

  // Optional set pulse length.
  mySwitch.setPulseLength(470);

  // Optional set protocol (default is 1, will work for most outlets)
  mySwitch.setProtocol(2);

  // Optional set number of transmission repetitions.
  // mySwitch.setRepeatTransmit(15);

}
void loop() {
  mySwitch.send(174784656, 28); // turn A on
  delay(1000);  
  mySwitch.send(174784640, 28); // turn A off
  delay(1000);  
   mySwitch.send(174784657, 28); // turn B on
  delay(1000);  
  mySwitch.send(174784641, 28); // turn B off
  delay(1000);
   mySwitch.send(174784658, 28); // turn C on
  delay(1000);  
  mySwitch.send(174784642, 28); // turn C off
  delay(1000);

  delay(5000);
}
