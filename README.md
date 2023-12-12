# Pin Library
Library for managing pins. It allows the definition of both digital and analog pins.

The library initializes the pins and adds the capability to perform edge detection for digital pins.

## Installation
1. Create a folder named `pin` in the Arduino libraries folder.
   - This folder is typically located at `C:\Program Files (x86)\Arduino\libraries`.
2. Clone this repository.

## Inclusion in the Program
The library can now be added to the program code using `#include <pin.h>`.

## Usage
### Defining Pins
For digital pins:<br>
`DigitalPin objectname(pinnumber, INPUT/OUTPUT)`

For analog pins:<br>
`AnalogPin objectname(pinnumber, INPUT/OUTPUT)`

Now, the pins are defined and can be used.

### Functions
For digital input pins:
- `isHIGH()` returns TRUE if the pin is in a HIGH state.
- `isLOW()` returns TRUE if the pin is in a LOW state.
- `EDGE()` returns TRUE if the state of the pin has changed between two calls.
- `posEDGE()` returns TRUE if the state of the pin has changed from LOW to HIGH between two calls.
- `negEDGE()` returns TRUE if the state of the pin has changed from HIGH to LOW between two calls.

For digital output pins:
- `setOut(bool value)` sets the output to the specified value.

For analog input pins:
- `analogValue()` returns the analog value.

For analog output pins:
- `analogOut(int value)` sets the output to the specified value. 0<=value<256
