[![GitHub issues](https://img.shields.io/github/issues/naabdi/Ard7Seg)](https://github.com/naabdi/Ard7Seg/issues)
[![GitHub license](https://img.shields.io/github/license/naabdi/Ard7Seg)](https://github.com/naabdi/Ard7Seg/blob/master/LICENSE)
![GitHub top language](https://img.shields.io/github/languages/top/naabdi/ard7seg)

# Ard7Seg
 Arduino Seven Segment Library
 This library is developed for Arduino to use 7-segment in a easy way.

 # How to use
 Download the zip file.
 Add the library to Arduino.

 *Determining Seven Segment Pins*
 ```cpp
 int pins[] = {2,3,4,5,6,7,8};//determining what pins of arduino connected to 7-segment
 ```

 *Making Seven Segment object*
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
 
 
