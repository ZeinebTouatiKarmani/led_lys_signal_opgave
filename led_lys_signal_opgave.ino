#include "led_lys_signal.h"
# include <Arduino.h>

led_lys_signal Hovedvej_signal(2,3,4);  // Brug pins 2 3 4 hhv Rød Gul Grøn
led_lys_signal Bivej_signal(6,7,8);  // Brug pins 6 7 8 hhv Rød Gul Grøn
led_lys_signal Hovedvej_cykel_signal(9,10,11);  
      
void setup() {
  Hovedvej_signal.attach();  // 
  Bivej_signal.attach();  // 
}

void loop() {
  //Testing only
  Hovedvej_signal.setred(HIGH);
  Hovedvej_signal.setyellow(LOW);
  Hovedvej_signal.setgreen(LOW);
  Bivej_signal.setred(LOW);
  Bivej_signal.setyellow(LOW);
  Bivej_signal.setgreen(HIGH);
  delay(3000);
  Hovedvej_signal.setred(HIGH);
  Hovedvej_signal.setyellow(HIGH);
  Hovedvej_signal.setgreen(LOW);
  Bivej_signal.setred(LOW);
  Bivej_signal.setyellow(HIGH);
  Bivej_signal.setgreen(LOW);
  delay(3000);
  Hovedvej_signal.setred(LOW);
  Hovedvej_signal.setyellow(LOW);
  Hovedvej_signal.setgreen(HIGH);
  Bivej_signal.setred(HIGH);
  Bivej_signal.setyellow(LOW);
  Bivej_signal.setgreen(LOW);
  delay(3000);
  Hovedvej_signal.setred(LOW);
  Hovedvej_signal.setyellow(HIGH);
  Hovedvej_signal.setgreen(LOW);
  Bivej_signal.setred(HIGH);
  Bivej_signal.setyellow(HIGH);
  Bivej_signal.setgreen(LOW);
  delay(3000);
}