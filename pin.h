#include "Arduino.h"

class Pin
{
    protected:
        unsigned short int pinNumber;

    public:
        Pin (unsigned short int);
};

class DigitalPin : public Pin
{
    private:
        bool currentState = 0;
        bool previousState = 0;
        uint8_t mode;

    public:
        bool isHIGH();
        bool isLOW();
        bool EDGE();
        bool posEDGE();
        bool negEDGE();
        void setOut(bool value);
        DigitalPin(unsigned short int newPinNumber, uint8_t newMode) : Pin(newPinNumber){
            pinMode(pinNumber, newMode);
            mode = newMode;
        };
};

class AnalogPin : Pin
{
    private:
        uint8_t mode;

    public:
        int analogValue();
        void analogOut(int value);
        AnalogPin(unsigned short int newPinNumber, uint8_t newMode) : Pin(newPinNumber){
            pinMode(pinNumber, newMode);
            mode = newMode;
        }
};