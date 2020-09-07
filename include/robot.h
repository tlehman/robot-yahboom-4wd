#include <wiringPi.h>
#include <softPwm.h>

#include "constants.h"

enum State { MOVING, STILL };

class Robot {
public:
  Robot() {
    init_motors();
    actual_state = State::STILL;
    desired_state = State::STILL;
  }
  ~Robot() {
    stop();
    actual_state = State::STILL;
    desired_state = State::STILL;
  }

  void forward();
  void backward();
  void stop();
private:
  void init_motors();
  State desired_state;
  State actual_state;
};

void Robot::init_motors() {
  wiringPiSetup();
  
  // Init motor drive IO in output mode
  pinMode(Left_motor_go, OUTPUT);
  pinMode(Left_motor_back, OUTPUT);
  pinMode(Right_motor_go, OUTPUT);
  pinMode(Right_motor_back, OUTPUT);
  
  softPwmCreate(Left_motor_pwm,0,255); 
  softPwmCreate(Right_motor_pwm,0,255);   
}

void Robot::forward() {
  if(actual_state == State::MOVING) {
    return;
  }
  desired_state = State::MOVING;
  int pwm = 100; // higher values = faster speeds
  while(desired_state == State::MOVING) {
    digitalWrite(Left_motor_go, HIGH);    
    digitalWrite(Left_motor_back, LOW);   
    softPwmWrite(Left_motor_pwm, pwm);
    digitalWrite(Right_motor_go, HIGH);   
    digitalWrite(Right_motor_back, LOW);  
    softPwmWrite(Right_motor_pwm, pwm);
    delay(100); //Unit:ms
  }
}

void Robot::backward() {
  if(actual_state == State::MOVING) {
    return;
  }
  desired_state = State::MOVING;
  int pwm = 100; // higher values = faster speeds
  while(desired_state == State::MOVING) {
    digitalWrite(Left_motor_go, LOW);
    digitalWrite(Left_motor_back, HIGH);
    softPwmWrite(Left_motor_pwm, pwm);
    digitalWrite(Right_motor_go, LOW);
    digitalWrite(Right_motor_back, HIGH);
    softPwmWrite(Right_motor_pwm, pwm);
    delay(100); //Unit:ms
  }
}

void Robot::stop() {
  if(actual_state == State::STILL) {
    return;
  }
  desired_state = State::STILL;
  digitalWrite(Left_motor_go, LOW);    
  digitalWrite(Left_motor_back, LOW);   
  digitalWrite(Right_motor_go, LOW);   
  digitalWrite(Right_motor_back, LOW);  
}
