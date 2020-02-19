#ifndef SevSegment_h
#define SevSegment_h

#include "Arduino.h"
class SevSeg
{
    public:
        SevSeg(int pins[7], char mode);
        void Write(char inputNum);
    private:
        int _pins[7];
        char _mode;
};

#endif