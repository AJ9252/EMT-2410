#include "mbed.h"

AnalogOut led (D16);
AnalogIn pot (A0);
int temp;

// main() runs in its own thread in the OS
int main()
{
    while (true) {
       led = pot;
       wait_us(100);
            
    }
}

