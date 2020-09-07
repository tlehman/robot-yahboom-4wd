#include <wiringPi.h>

/**
* Function       servo_pulse
* @author        Danny
* @date          2017.08.16
* @brief         Define a pulse function to generate the PWM value in the analog mode. 
*                The base pulse is 20ms, 
*                and the high level of the pulse is controlled at 0-180 degrees in 0.5-2.5ms.
* @param[in1]    ServPin
* @param[in2]    myangle
* @param[out]    void
* @retval        void
* @par History   
*/
void servo_pulse(int v_iServoPin, int myangle)
{
  int PulseWidth;                    //Define the pulse width variable
  PulseWidth = (myangle * 11) + 500; //Convert the Angle to 500-2480 pulse width
  digitalWrite(v_iServoPin, HIGH);    
  delayMicroseconds(PulseWidth);     
  digitalWrite(v_iServoPin, LOW);      
  delay(20 - PulseWidth / 1000);     //Delay remaining time 
  return;
}

/**
* Function       servo_up
* @author        Danny
* @date          2017.08.16
* @brief         Camera servo turn up
* @param[in]     void
* @param[out]    void
* @retval        void
* @par History   
*/
void servo_up()
{
    int pos, i;
    pos = ServoUpDownPos;
	servo_pulse(ServoUpDownPin, pos); 
	pos += 1;
	ServoUpDownPos = pos;
	if (ServoUpDownPos >= 180)
	{
		ServoUpDownPos = 180;
	}
}

int main(int argc, char *argv[]) {
    return 0;
}
