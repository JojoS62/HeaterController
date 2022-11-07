#include "mbed.h"
#include "mbed-trace/mbed_trace.h"
#include "lvgl_interface.h"
#include "system/storage.h"
#include "system/network.h"
#include "system/mqtt.h"
#include "system/io.h"

DigitalOut  ledRed(LED1, 0);

int main()
{
    mbed_trace_init();

    // init sdc
    print_dir(&fs, "/");
    printf("\n"); 

    //io_init();
    lvgl_interface_init();
    network_init();
    mqtt_init();

	while(true) {
        ledRed = !ledRed;
        
        ThisThread::sleep_for(500ms);
    }

	// main() is expected to loop forever.
	// If main() actually returns the processor will halt
	return 0;
}

// workaround for missing functions since gcc 11.3
extern "C" {
    void _kill() {};
    void _getpid() {};
}