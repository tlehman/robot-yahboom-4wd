#-*- coding:UTF-8 -*-
import RPi.GPIO as GPIO
import time

#Definition of  motor pin 
IO2 = 2

#Set the GPIO port to BCM encoding mode.
GPIO.setmode(GPIO.BCM)

#Ignore warning information
GPIO.setwarnings(False)

#Fan pin initialization operation
def fan_init():
    GPIO.setup(IO2,GPIO.OUT,initial=GPIO.HIGH)

#advance
def run():
    GPIO.output(IO2, GPIO.LOW)

#delay 2s
time.sleep(2)

#The try/except statement is used to detect errors in the try block.
#the except statement catches the exception information and processes it.
try:
    fan_init()
    while True:
        run()
except KeyboardInterrupt:
    pass
GPIO.cleanup()

