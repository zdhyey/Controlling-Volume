import serial
import pyautogui as pag
import math as math
import time

ArduinoSerial = serial.Serial('COM3', 9600)
time.sleep(10)


while 1:
    ard_dur = ArduinoSerial.readline()
    ad = int(ard_dur,10)
    if (ad >= 200 and ad <= 1000):
        pix = (-0.09*(ad)) + 1612
        fpix = math.floor(pix)
        pag.click(fpix, 855, 1, 0, 'left')
    
