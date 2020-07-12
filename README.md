# Controlling-Volume
Using Arduino and Python to Control Volume in VLC.

This is a small and basic project using Arduino and Python to control the Volume by Hand Gestures in VLC 3.0.11.
In this project, first we need to build the physical circuit required. For the circuit, one HC SR04 ultrasonic sensor was used and four jumper wires. Breadboard and the Arduino Uno board is also used.
The GND pin is connected to the GNG in Arduino Uno board and Vcc pin is conected to the 5V in Arduino Uno Board. The Trig and Echo pin are connected to any digital pins ( 8 and 9 in this case ) to send and recieve the waves. 

 Arduino Code : 

After declaring ther variables, pinmodes and opening the Serial monitor, Trigger pin is set to low for 2 microseconds so that the starting is always low. Then it is set to high for 10 microseconds to send the ultasonic waves and then it is set again at low. 
The sensor records the duration of the wave thrown, refleacted and recieved buy the sensor.
The duration is printed on Serial Monitor.

Pre Python Code Prep :
Calculate the position of the mouse where it should click to change the volume. Derive the equation of the extremes of pixels and the duration recorded by the sensor.

Python Code :
The following libraries arte used : PySerial, PuAutoGUI, Math and Time.

After the importing the above mentioned libraries and declaring the Serial object, read the value which is shown on the Serial Monitor of the Arduino IDE. If the value satisfies the conditions than do the required maths and get the pixel to which the mouse should be clicked to change the Volume. 



