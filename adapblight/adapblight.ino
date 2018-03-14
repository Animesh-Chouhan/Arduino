//We always have to include the library
// Based on a project posted https://github.com/wayoda/LedControl
#include "LedControl.h"

/*
 Now we need a LedControl to work with.
 // Customzied by A.B.S for RoboJax.com on Feb 26, 2017 in Ajax, Ontario, Canada.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn 
 pin 11 is connected to the CLK 
 pin 10 is connected to CS
 We have only a single MAX72XX.
 */
LedControl lc=LedControl(12,11,10,1);

/* we always wait a bit between updates of the display */
unsigned long delaytime=1600;

void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */

  /* and clear the display */
 // lc.clearDisplay(0);
}

/*
 This method will display the characters for the
 word "Arduino" one after the other on the matrix. 
 (you need at least 5x7 leds to see the whole chars)
 */
//void writeArduinoOnMatrix() {
//  /* here is the data for the characters */
//
//int val = analogRead(A0);
//byte circ[]={B00000000,B00111100,B01111110,B01111110,B01111110,B01111110,B00111100,B00000000};
// lc.setIntensity(0,1);
//  for (int i=0; i<8; i++){
//  lc.setRow(0,i,circ[i]);
//  }
// delay(2000);
//
// lc.setIntensity(0,5);
//  for (int i=0; i<8; i++){
//  lc.setRow(0,i,circ[i+1]);
//  }
// 
 
 

//}// writeArduinoOnMatrix()  end


void loop() { 
 int i;
 // int val = analogRead(A0);
//  if(val<=900){} 
// writeArduinoOnMatrix();


  for (int i=0; i<8; i++){
  lc.setRow(0,i,11111111);
  delay(1000);
  lc.setIntensity(0,1);
  }
 
} 
