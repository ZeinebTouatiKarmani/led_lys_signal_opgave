#include "led_lys_signal.h"

led_lys_signal::led_lys_signal(int r, int y, int g) 
{
  redpin = r;
  yellowpin = y;
  greenpin = g;
}

void led_lys_signal::attach()
{
  pinMode(redpin, OUTPUT);
  pinMode(yellowpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  digitalWrite(redpin,LOW);
  digitalWrite(yellowpin, LOW);
  digitalWrite(greenpin, LOW);
}

void led_lys_signal::setred(bool status)
{
  digitalWrite(redpin, status);
}

void led_lys_signal::setyellow(bool status)
{
  digitalWrite(yellowpin, status);
}

void led_lys_signal::setgreen(bool status)
{
  digitalWrite(greenpin, status);
}




