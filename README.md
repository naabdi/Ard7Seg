[![GitHub issues](https://img.shields.io/github/issues/naabdi/Ard7Seg)](https://github.com/naabdi/Ard7Seg/issues)
[![GitHub license](https://img.shields.io/github/license/naabdi/Ard7Seg)](https://github.com/naabdi/Ard7Seg/blob/master/LICENSE)
![GitHub top language](https://img.shields.io/github/languages/top/naabdi/ard7seg)

# Ard7Seg
 Arduino Seven Segment Library
 This library is developed for Arduino to use 7-segment in an easy way.

 # How to use
 Download the zip file.
 Add the library to Arduino.

*Determining Seven Segment Pins*
 
Aruino pin 2 -> a

Aruino pin 3 -> b

Aruino pin 4 -> c

Aruino pin 5 -> d

Aruino pin 6 -> e

Aruino pin 7 -> f

Aruino pin 8 -> g
 ```cpp
 int pins[] = {2,3,4,5,6,7,8};
 ```

 *Making Seven Segment instance*
 ```cpp
 SevSeg mysegment = SeveSeg(pins,'A');//for common anode

 SevSeg mysegment = SeveSeg(pins,'C');//for common cathod
 ```

 *Writing to Seven Segment*
 
 Show integers
 ```cpp
 mysegment.Write(5);//for integers
 ```
 Show characters
 ```cpp
 mysegment.Write('5');//for characters
 ```
 *Test 7-Segment LEDs*
 ```cpp
 mysegment.LampTest();
 ```
 *Turn off 7-Segment LEDs*
 ```cpp
 mysegment.TurnOff();
 ```
 
 
