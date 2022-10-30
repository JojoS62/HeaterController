#include "mbed.h"

DigitalOut  ledRed(LED1, 0);
DigitalOut  ledGreen(LED2, 1);

int main()
{
	while(true) {
        ledRed = !ledRed;
        ledGreen = !ledGreen;
        
        ThisThread::sleep_for(500ms);
    }

	// main() is expected to loop forever.
	// If main() actually returns the processor will halt
	return 0;
}