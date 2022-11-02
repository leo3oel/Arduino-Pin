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
        uint8_t mode;

    public:
        bool isHIGH();
        bool isLOW();
        bool EDGE();
        bool posEDGE();
        bool negEDGE();
        void setOut(bool value);
        DigitalPin(unsigned short int newpinnumber, uint8_t newmode) : Pin(newpinnumber){
            pinMode(pinnumber, newmode);
            mode = newmode;
        };//Sets Pinnumber (calling Pin Constructor)
};

class AnalogPin : Pin
{
    private:
        uint8_t mode;

    public:
        int analogValue();
        void analogOut(int value);
        AnalogPin(unsigned short int newpinnumber, uint8_t newmode) : Pin(newpinnumber){
            pinMode(pinnumber, newmode);
            mode = newmode;
        }
};