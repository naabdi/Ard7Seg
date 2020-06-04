#ifndef SevSegment_h
#define SevSegment_h

#include "Arduino.h"
class SevSeg
{
    public:
        SevSeg(int pins[], char);
        void Write(int);
        void LampTest();
        void TurnOff();
    private:
        int _pins[7];
        char _mode;
        void ShowNum(int);
};

#endif
