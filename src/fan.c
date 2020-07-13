#include <wiringPi.h>


/**
* @par Copyright (C): 2020 Tobi Lehman
* @file         fan.c
* @author       Tobi Lehman
* @version      V0.1
* @date         2020.07.12
* @brief        Fan on/off
* @details
* @par History  
*/

const int IO2 = 2; // fan pin

int main(int argc, char *argv[]) {
  wiringPiSetup();
  pinMode(IO2, OUTPUT);
  if(argc > 2 && argv[2] == "1") {
      digitalWrite(IO2, HIGH);
  } else {
      digitalWrite(IO2, LOW);
  }
  return 0;
}