#include "pin.h"

bool DigitalPin::isHIGH()
{
    //Returns 1 if High else 0
    bool isHigh = digitalRead(pinNumber);
    if(isHigh)
        return 1;
    else
        return 0;
}

bool DigitalPin::isLOW()
{
    //Returns 1 if Low else 0
    bool isLow = digitalRead(pinNumber);
    if(!isLow)
        return 1;
    else
        return 0;    
}

bool DigitalPin::EDGE()
{
    //Returns 1 if states have changed
    previousState = currentState;
    currentState = digitalRead(pinNumber);
    if(previousState != currentState)
        return 1;
    else
        return 0;
}

bool DigitalPin::posEDGE()
{
    //Returns 1 if state changed between 0 to 1
    previousState = currentState;
    currentState = digitalRead(pinNumber);
    if((previousState == 0) && (currentState == 1))
        return 1;
    else
        return 0;
}

bool DigitalPin::negEDGE()
{
    //Returns 1 if state changed between 0 to 1
    previousState = currentState;
    currentState = digitalRead(pinNumber);
    if((previousState == 1) && (currentState == 0))
        return 1;
    else
        return 0;
}

void DigitalPin::setOut(bool value)
{
    digitalWrite(pinNumber, value);
}