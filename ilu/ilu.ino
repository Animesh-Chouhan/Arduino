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
  lc.setIntensity(0,8);
  /* and clear the display */
  lc.clearDisplay(0);
}

/*
 This method will display the characters for the
 word "Arduino" one after the other on the matrix. 
 (you need at least 5x7 leds to see the whole chars)
 */
void writeArduinoOnMatrix() {
  /* here is the data for the characters */

  // K
byte I[] = { B11111111,B11111111,B00011000,B00011000,B00011000,B00011000,B11111111,B11111111};
byte love[] = { B00000000,B01100110,B11111111,B11111111,B11111111,B01111110,B00111100,B00011000};
byte U[] = { B11000011,B11000011,B11000011,B11000011,B11000011,B11000011,B11111111,B11111111};
  /* Letter   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,I[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// END of Letter///////

  /* Letter   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,love[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// END of Letter///////


  /* Letter   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,U[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// END of Letter///////

 

}// writeArduinoOnMatrix()  end


void loop() { 
  writeArduinoOnMatrix();

} 
