#include "robot.h"
#include <signal.h>
#include <iostream>
using std::cout;
using std::endl;

Robot robot;

void handle_signal(int s){
  cout << "Caught signal " << s << endl;
  robot.stop();
  exit(1); 
}

void init_signal_handler() {
  struct sigaction sig_term_handler;

  sig_term_handler.sa_handler = handle_signal;
  sigemptyset(&sig_term_handler.sa_mask);
  sig_term_handler.sa_flags = 0;

  sigaction(SIGTERM, &sig_term_handler, NULL);
}

int main() {
  init_signal_handler();

  robot.forward();
	return 0;
}

