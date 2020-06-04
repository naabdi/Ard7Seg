#include "Arduino.h"
#include "SevSegment.h"

SevSeg::SevSeg(int pins[7], char mode)
        {
            for (int i = 0;i<7;i++) {
              pinMode(pins[i],OUTPUT);
              _pins[i] = pins[i];
              }
            _mode = mode;
        }

    void SevSeg::Write(int inputNum)
    {
      if (inputNum > 9){inputNum = inputNum - '0';}
      if(_mode =='A')
	  {
        switch (inputNum)
		{
    case 0:
		  ShowNum(0xC0);
		break;
		case 1:
		  ShowNum(0xC0);
		break;
		case 2:
		  ShowNum(0xA4);
		break;
		case 3:
		  ShowNum(0xB0);
		break;
		case 4:
        ShowNum(0x99);
		break;
		case 5:
        ShowNum(0x92);
		break;
		case 6:
        ShowNum(0x82);
		break;
		case 7:
        ShowNum(0xF8);
		break;
		case 8:
        ShowNum(0x80);
		break;
		case 9:
        ShowNum(0x90);
		break;
  }

      }
      else if(_mode == 'C') {
        int num;
          switch (inputNum) {
    case '0':case 0:
    num = 0x3F;
        for (int i = 0;i<7;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '1':case 1:
      num = 0x06;
        for (int i = 0;i<7;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '2':case 2:
      num = 0x5B;
        for (int i = 0;i<7;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '3':case 3:
      num = 0x4F;
        for (int i = 0;i<7;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '4':case 4:
      num = 0x66;
        for (int i = 0;i<7;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '5':case 5:
      num = 0x6D;
        for (int i = 0;i<7;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '6':case 6:
      num = 0x7D;
        for (int i = 0;i<7;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '7':case 7:
      num = 0x07;
        for (int i = 0;i<7;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '8':case 8:
      num = 0x7F;
        for (int i = 0;i<7;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
      case '9':case 9:
      num = 0x6F;
        for (int i = 0;i<7;i++) {
           digitalWrite(_pins[i],bitRead(num,i));
          }
      break;
  }

      }
    }
void SevSeg::ShowNum(int number)
{
	size_t i;
	for (i = 0;i<7;i++)
		digitalWrite(_pins[i],bitRead(number,i));
}

void SevSeg::LampTest()
{
	if (_mode == 'A') ShowNum(0x00);
	if (_mode == 'C') ShowNum(0xFF);
}
