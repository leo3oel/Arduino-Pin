#ifndef ARDUNIO_PIN
#define ARDUNIO_PIN

#ifdef ARDUINO
#include "Arduino.h"
#else
#include "debugPlaceholder.h"
#endif

class Pin
{
    protected:
        unsigned short int pinNumber;

    public:
        Pin (unsigned short int);
        unsigned short getPinNumber();
};

class DigitalPin : public Pin
{
    private:
        bool currentState = 0;
        bool previousState = 0;
        unsigned short mode;

    public:
        bool isHIGH();
        bool isLOW();
        bool EDGE();
        bool posEDGE();
        bool negEDGE();
        void setOut(bool value);
        DigitalPin(unsigned short int newPinNumber, unsigned short newMode) : Pin(newPinNumber){
            pinMode(pinNumber, newMode);
            mode = newMode;
        };
};

class AnalogPin : Pin
{
    private:
        unsigned short mode;

    public:
        int analogValue();
        void analogOut(int value);
        AnalogPin(unsigned short int newPinNumber, unsigned short newMode) : Pin(newPinNumber){
            pinMode(pinNumber, newMode);
            mode = newMode;
        }
};

#endif
