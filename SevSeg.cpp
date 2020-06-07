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
		  ShowNum(0xF9);
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
      else if(_mode == 'C')
      {
        switch (inputNum)
      {
      case 0:
      ShowNum(0x3F);
      break;
      case 1:
      ShowNum(0x06);
      break;
      case 2:
      ShowNum(0x5B);
      break;
      case 3:
      ShowNum(0x4F);
      break;
      case 4:
        ShowNum(0x66);
      break;
      case 5:
        ShowNum(0x6D);
      break;
      case 6:
        ShowNum(0x7D);
      break;
      case 7:
        ShowNum(0x07);
      break;
      case 8:
        ShowNum(0x7F);
      break;
      case 9:
        ShowNum(0x6F);
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

void SevSeg::TurnOff()
{
	if (_mode == 'A') ShowNum(0xFF);
	if (_mode == 'C') ShowNum(0x00);
}
