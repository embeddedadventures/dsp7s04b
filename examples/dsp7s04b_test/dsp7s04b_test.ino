#include <Wire.h>
#include <dsp7s04b.h>

//
// Sample program to demonstrate communicating with DSP-7S04B display
//

void setup () {
  Wire.begin();
  Serial.begin(115200);
  Serial.println("Embedded Adventures DSP-7S04B demo\n\r");
  dsp7s04b.setAddress(EA_DSP7S04_ADDR_DEFAULT);
}

void loop() {
  Serial.println("Clearing...");
  dsp7s04b.clearDisplay();
  delay(1000);
  Serial.println("Print str...");
  dsp7s04b.println("1234");
  delay(1000);
  Serial.println("Setting level at 127");
  dsp7s04b.setBrightness(127);
  delay(1000);
  Serial.println("Setting level at 10");
  dsp7s04b.setBrightness(10);
  delay(1000);
  Serial.println("Setting level at 255");
  dsp7s04b.setBrightness(255);
  delay(1000);
  Serial.println("Colon on");
  dsp7s04b.setColon();
  delay(1000);
  Serial.println("Colon off");
  dsp7s04b.clearColon();
  delay(1000);
  Serial.println("Dots on");
  dsp7s04b.setDot(0);
  dsp7s04b.setDot(1);
  dsp7s04b.setDot(2);
  dsp7s04b.setDot(3);
  delay(1000);
  Serial.println("Dots off");
  dsp7s04b.clearDot(0);
  dsp7s04b.clearDot(1);
  dsp7s04b.clearDot(2);
  dsp7s04b.clearDot(3);
  delay(1000);
  Serial.println("Set raw segments");
  dsp7s04b.setRaw(0, 0b0000000000001001);
  dsp7s04b.setRaw(1, 0b0000000000001001);
  dsp7s04b.setRaw(2, 0b0000000000001001);
  dsp7s04b.setRaw(3, 0b0000000000001001);
  delay(1000);
  
  
}
