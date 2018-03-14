/*
      8x8 LED Matrix MAX7219 Example 01
   by Dejan Nedelkovski, www.HowToMechatronics.com
   Based on the following library:
   GitHub | riyas-org/max7219  https://github.com/riyas-org/max7219
*/
#include <MaxMatrix.h>
int DIN = 12;   // DIN pin of MAX7219 module
int CLK = 11;   // CLK pin of MAX7219 module
int CS = 10;    // CS pin of MAX7219 module
int maxInUse = 1;
MaxMatrix m(DIN, CS, CLK, maxInUse);
char A[] = {8, 8,
            B00000000,
            B00111100,
            B01100110,
            B01100110,
            B01111110,
            B01100110,
            B01100110,
            B01100110
           };
char B[] = {8, 8,
            B00000000,
            B01111100,
            B01100110,
            B01100110,
            B01111100,
            B01100110,
            B01100110,
            B01111100

           };
char H[] = {8, 8,
            B00000000,
            B01100110,
            B01100110,
            B01100110,
            B01111110,
            B01100110,
            B01100110,
            B01100110
           };
char P[] = {8, 8,
            B00000000,
            B01111100,
            B01100110,
            B01100110,
            B01100110,
            B01111100,
            B01100000,
            B01100000
           };
char Y[] = {8, 8,
            B00000000,
            B01100110,
            B01100110,
            B01100110,
            B00111100,
            B00011000,
            B00011000,
            B00011000
           };
char D[] = {8, 8,
            B00000000,
            B01111100,
            B01100110,
            B01100110,
            B01100110,
            B01100110,
            B01100110,
            B01111100
           };
char R[] = {8, 8,
            B00000000,
            B01111100,
            B01100110,
            B01100110,
            B01111100,
            B01111000,
            B01101100,
            B01100110
           };
char E[] = {8, 8,
            B00000000,
            B01111110,
            B01100000,
            B01100000,
            B01111100,
            B01100000,
            B01100000,
            B01111110
           };
char T[] = {8, 8,
            B00000000,
            B01111110,
            B01011010,
            B00011000,
            B00011000,
            B00011000,
            B00011000,
            B00011000
           };
char I[] = {8, 8,
            B00000000,
            B00111100,
            B00011000,
            B00011000,
            B00011000,
            B00011000,
            B00011000,
            B00111100
           };
char BLANK[] = {8, 8,
                B00000000,
                B00000000,
                B00000000,
                B00000000,
                B00000000,
                B00000000,
                B00000000,
                B00000000
               };


void setup() {
  m.init(); // MAX7219 initialization
  m.setIntensity(15); // initial led matrix intensity, 0-15
}
void loop() {
  // Seting the LEDs On or Off at x,y or row,column position

  m.clear();
  // Displaying the character at x,y (upper left corner of the character)

  m.writeSprite(0, -1, H);
  for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }

  m.writeSprite(0,-1, A);
  for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
  m.writeSprite(0, -1, P);
    for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
  m.writeSprite(0, -1, P);
    for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
  m.writeSprite(0, -1, Y);
    for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
 
  m.writeSprite(0, -1, B);
    for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
  m.writeSprite(0, -1, D);
   for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
  m.writeSprite(0, -1, A);
    for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
  m.writeSprite(0, -1, Y);
    for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
  
  m.writeSprite(0, -1, R);
    for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
  m.writeSprite(0, -1, E);
    for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
  m.writeSprite(0, -1, E);
    for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
  m.writeSprite(0, -1, T);
    for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }
  m.writeSprite(0, -1, I);
    for (int i = 0; i < 8; i++) {
    m.shiftDown(false);
    delay(300);
  }



  
  m.clear();
}

