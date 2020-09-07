/**
* @par Copyright (C): 2020 Tobi Lehman
* @file         fan.cc
* @author       Tobi Lehman
* @version      V0.1
* @date         2020.07.19
* @brief        Servo control
* @details
* @par History 
*/

#include <wiringPi.h>
#include "../include/pins.h"
#include <time.h>
#include <iostream>

int main(int argc, char *argv[]) {
  wiringPiSetup();
  pinMode(pins::fan, OUTPUT);
  digitalWrite(pins::fan, 0);
  sleep(1);
  pinMode(pins::fan, INPUT);
  return 0;
}
