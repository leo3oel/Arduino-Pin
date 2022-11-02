#include "pin.h"

bool DigitalPin::isHIGH()
{
    //Returns 1 if High else 0
    bool isHigh = digitalRead(pinnumber);
    if(isHigh)
        return 1;
    else
        return 0;
}

bool DigitalPin::isLOW()
{
    //Returns 1 if Low else 0
    bool isLow = digitalRead(pinnumber);
    if(!isLow)
        return 1;
    else
        return 0;    
}

bool DigitalPin::EDGE()
{
    //Returns 1 if states have changed
    previousstate = currentstate;
    currentstate = digitalRead(pinnumber);
    if(previousstate != currentstate)
        return 1;
    else
        return 0;
}

bool DigitalPin::posEDGE()

    //Returns 1 if state changed between 0 to 1
    previousstate = currentstate;
    currentstate = digitalRead(pinnumber);
    if((previousstate == 0) && (currentstate == 1))
        return 1;
    else
        return 0;
}

bool DigitalPin::negEDGE()
{
    //Returns 1 if state changed between 0 to 1
    previousstate = currentstate;
    currentstate = digitalRead(pinnumber);
    if((previousstate == 1) && (currentstate == 0))
        return 1;
    else
        return 0;
}

void DigitalPin::setOut(bool value)
{
    digitalWrite(pinnumber, value);
}