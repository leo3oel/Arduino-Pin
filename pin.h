#include "Arduino.h"

class Pin
{
    protected:
        unsigned short int pinnumber;

    public:
        Pin (unsigned short int);
};

class DigitalPin : public Pin
{
    private:
        bool currentstate;
        bool previousstate;

    public:
        bool isHIGH();
        bool isLOW();
        bool EDGE();
        bool posEDGE();
        bool negEDGE();
        DigitalPin(unsigned short int newpinnumber, uint8_t mode) : Pin(newpinnumber){
            pinMode(pinnumber, mode);
        };//Sets Pinnumber (calling Pin Constructor)
};

class AnalogPin : Pin
{
    //not needed here
};