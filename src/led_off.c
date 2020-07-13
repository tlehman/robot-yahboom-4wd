/**
* @par Copyright (C): 2010-2019, Shenzhen Yahboom Tech
* @file         ColorLED.c
* @author       Tobi Lehman
* @version      V1.0
* @date         2020.07.12
* @brief        LED OFF
* @details
* @par History  
*/
#include <wiringPi.h>

#define ON 1     
#define OFF 0    

//Definition of Pin
int LED_R = 3;           //LED_R is connected to  wiringPi port 3 of Raspberry pi
int LED_G = 2;           //LED_G is connected to  wiringPi port 2 of Raspberry pi
int LED_B = 5;           //LED_B is connected to  wiringPi port 5 of Raspberry pi

/**
* Function       color_led
* @author        Danny
* @date          2017.08.16
* @brief         7 different colors formed by different combinations of R,G and B
* @param[in1]    Red
* @param[in2]    Green
* @param[in3]    Blue
* @retval        void
* @par History   
*/
void color_led(int v_iRed, int v_iGreen, int v_iBlue)
{
  v_iRed == ON ? digitalWrite(LED_R, HIGH): digitalWrite(LED_R, LOW);
 
  v_iGreen == ON ? digitalWrite(LED_G, HIGH) : digitalWrite(LED_G, LOW);

  v_iBlue == ON ? digitalWrite(LED_B, HIGH) : digitalWrite(LED_B, LOW);
}

/**
* Function       main
* @author        Danny
* @date          2017.08.16
* @brief         Display 7 color LED
* @param[in]     void
* @retval        void
* @par History   
*/
int main()
{
  wiringPiSetup();

  //Initialize the RGB IO as the output mode
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);

  color_led(OFF, OFF, OFF); //   0        0        0
  return 0;	
}
