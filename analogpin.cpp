#include "pin.h"

int AnalogPin::analogValue()
{
    return analogRead(pinnumber);
}

void AnalogPin::analogOut(int value)
{
    analogWrite(pinnumber, value);
}