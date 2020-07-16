#include <wiringPi.h>
#include <unistd.h>
#include "../include/pins.h"

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
  wiringPiSetupGpio(); // PIN 2
  pinMode(IO2, OUTPUT);
  digitalWrite(IO2, 1);
  sleep(5);
  digitalWrite(IO2, 0);
  sleep(1);
  pinMode(IO2, INPUT);
  return 0;
}
