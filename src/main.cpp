#include "mbed.h"

DigitalOut  led(LED1);

int main()
{
	while(true) {
        led = !led;

        ThisThread::sleep_for(500ms);
    }

	// main() is expected to loop forever.
	// If main() actually returns the processor will halt
	return 0;
}