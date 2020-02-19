#include "Arduino.h"
#include "SevSegment.h"

SevSeg::SevSeg(int pins[7], char mode)
        {
            for (int i = 0;i<8;i++) {
              pinMode(pins[i],OUTPUT);
              _pins[i] = pins[i];
              }
            _mode = mode;
        }

    void SevSeg::Write(char inputNum) 
    {
      int num;
      if(_mode =='A'){
        switch (inputNum) {
    case '0':
    num = 0xC0;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;  
      case '1':
      num = 0xF9;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '2':
      num = 0xA4;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break; 
      case '3':
      num = 0xB0;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '4':
      num = 0x99;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '5':
      num = 0x92;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '6':
      num = 0x82;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '7':
      num = 0xF8;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '8':
      num = 0x80;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '9':
      num = 0x90;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
  }

      }
      else if(_mode == 'C') {
          switch (inputNum) {
    case '0':
    num = 0x3F;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;  
      case '1':
      num = 0x06;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '2':
      num = 0x5B;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break; 
      case '3':
      num = 0x4F;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '4':
      num = 0x66;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '5':
      num = 0x6D;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '6':
      num = 0x7D;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '7':
      num = 0x07;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '8':
      num = 0x7F;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '9':
      num = 0x6F;
        for (int i = 0;i<8;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
  }

      }
    }