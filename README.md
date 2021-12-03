## **C code from ECE09342: Intro to Embedded Lab 6 using the MSP430**

This lab works to explore the use of ADC by integrating sensors from the MSP430 and boosterpack. The following code will capture one temperature sensor analog data and processes it into a digital sample. This code will then be implemented into the following lab which will send the digital data to a C# GUI that can be interfaced and loaded to the online Internet of Things (IoT) development environment ThingSpeak.

## **lab6q1.c:** 
This C program compiled in CCS works to read raw analog data from an internal thermister and convert their values into digital data to be graphed. 
```
  input: temperture analog data
  output: temperture digital data 
```
