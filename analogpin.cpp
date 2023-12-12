#include "pin.h"

int AnalogPin::analogValue()
{
    return analogRead(pinNumber);
}

void AnalogPin::analogOut(int value)
{
    analogWrite(pinNumber, value);
}