#include <wiringPi.h>
#include <unistd.h>
#include "../include/pins.h"
#include <time.h>
#include <iostream>

/**
* @par Copyright (C): 2020 Tobi Lehman
* @file         fan.cc
* @author       Tobi Lehman
* @version      V0.1
* @date         2020.07.12
* @brief        Fan on/off
* @details
* @par History 
*/

/**
  pinMode(pins::fan, OUTPUT);
 */


int main(int argc, char *argv[]) {
  wiringPiSetupGpio();
  pinMode(pins::fan, OUTPUT);
  digitalWrite(pins::fan, 0);
  sleep(1);
  pinMode(pins::fan, INPUT);
  return 0;
}
