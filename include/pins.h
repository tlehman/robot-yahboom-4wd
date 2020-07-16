/*
 * pins.h:
 *  
 *  Copyright (c) 2020 Tobi Lehman
 ***********************************************************************
 * This file is depends on wiringPi:
 *  https://projects.drogon.net/raspberry-pi/wiringpi/
 *
 *    wiringPi is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This software is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public License
 *    along with wiringPi.  If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************
 */

#ifndef PINS_H_
#define PINS_H_

namespace pins {
  const int fan = 2;        // BCM mode
  const int LED_red   = 3;
  const int LED_green = 2;
  const int LED_blue  = 5;

  const int Left_motor_go = 28;       //AIN2 connects to wiringPi port 28
  const int Left_motor_back = 29;     //AIN1 connects to wiringPi port 29

  const int Right_motor_go = 24;      //BIN2 connects to wiringPi port 24
  const int Right_motor_back = 25;    //BIN1 connects to wiringPi port 25

  const int Left_motor_pwm = 27;      //PWMA connects to wiringPi port 27
  const int Right_motor_pwm = 23;     //PWMA connects to wiringPi port 23

  const int obstacle_avoidance_left = 11;
  const int obstacle_avoidance_right = 32;
}
#endif // PINS_H_
