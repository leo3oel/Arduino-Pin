#include "pin.h"

int AnalogPin::analogValue()
{
    #if (mode!="INPUT")
    #error Pin Mode must be input.
    #endif
    return analogRead(pinnumber);
}

int AnalogPin::analogOut(int value)
{
    #if (mode!="OUTPUT")
    #error Pin Mode must be output.
    #endif
    analogWrite(pinnumber, value);
}