#include "LedControl.h"
LedControl lc = LedControl(12, 11, 10, 1);
void setup() {
  // put your setup code here, to run once:
  lc.shutdown(0, false);

}

void blank()
{
  while (1) {
    for (int i = 0; i < 8; i++) {
      lc.setRow(0, i, 0); // this is for blank
    }
    int val1 = analogRead(A0);
    if (val1 > 50) break;
  }
}
void flicker()
{
  byte circ[] = {B00000000, B00111100, B01111110, B01111110, B01111110, B01111110, B00111100, B00000000};
  lc.setIntensity(0, 15);
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, circ[i]);
  }
  delay(100);
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, 0); // this is for blank
  }
  delay(100);
}

void dim()
{
  byte circ[] = {B00000000, B00111100, B01111110, B01111110, B01111110, B01111110, B00111100, B00000000};
  int val2;
  for (;;)
  {
    val2 = analogRead(A0);
    if (val2 > 800) flicker();
    if (val2 < 50) blank();
    for (int i = 0; i < 8; i++) {
      lc.setRow(0, i, circ[i]);
    }
    lc.setIntensity(0, (val2 / 69)-5);

  }
}
void loop() {
  // put your main code here, to run repeatedly:
  byte circ[] = {B00000000, B00111100, B01111110, B01111110, B01111110, B01111110, B00111100, B00000000};

  for (;;) {

    int val = analogRead(A0);
    if (val < 50)  blank();
    if (val > 800)  flicker();
    if (val > 50 && val < 800) dim();
  }

}


