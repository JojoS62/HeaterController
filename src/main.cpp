#include "mbed.h"
#include "lvgl_interface.h"

DigitalOut  ledRed(LED1, 0);


int main()
{
    // init lvgl
    lvgl_interface_init();

	while(true) {
        ledRed = !ledRed;
        
        ThisThread::sleep_for(500ms);
    }

	// main() is expected to loop forever.
	// If main() actually returns the processor will halt
	return 0;
}