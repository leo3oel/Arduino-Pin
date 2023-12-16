#include "pin.h"

Pin::Pin(unsigned short int newPinNumber)
{
    pinNumber = newPinNumber;
} 

unsigned short Pin::getPinNumber()
{
    return pinNumber;
}