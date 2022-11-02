# Pin library
Library um Pins anzulegen. Es können digitale Pins und AnalogePins definiert werden. 

Die Library initialisiert die Pins und ergänzt bei digitalen Pins die Möglichkeit Flankenabfragen durchzuführen.

## Installation
1. Ordner `pin` im Arduino libraries Ordner erstellen
    - Dieser befindet sich idR unter `C:\Program Files (x86)\Arduino\libraries`
2. Dieses Repository clonen

## Aufruf im Programm
Die Library kann nun mit `#include <pin.h>` dem Programmcode hinzugefügt werden

## Verwendung
### Pins definieren
Für digitale Pins:<br>
`DigitalPin objectname(pinnumber, INPUT/OUTPUT)`

Für analoge Pins:<br>
`AnalogPin objectname(pinnumber, INPUT/OUTPUT)`

Nun sind die Pins angelegt und können verwendet werden.

### Funktionen
Für digitale Eingangspins:
- `isHIGH()` gibt TRUE zurück wenn Pin im HIGH Zustand
- `isLOW()` gibt TRUE zurück wenn Pin im LOW Zustand
- `EDGE()` gibt TRUE zurück wenn der Zustand am Pin zwischen zwei Aufrufen gewechselt ist
- `posEDGE()` gibt TRUE zurück wenn der Zustand am Pin zwischen zwei Aufrufen von LOW nach HIGH gewechselt ist
- `negEDGE()` gibt TRUE zurück wenn der Zustand am Pin zwischen zwei Aufrufen von HIGH nach LOW gewechselt ist

Für digitale Ausgangspins:
- `setOut(bool value)` setzt Ausgang auf value.

Für analoge Eingangspins:
- `analogValue()` gibt Analogwert zurück

Für analoge Ausgangspins:
- `analogOut(int value)` setzt Ausgang auf value. 0<=value<256