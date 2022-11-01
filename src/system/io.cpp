#include "io.h"

float temperature1 = 123.0f;

void io_thread_fn(){
    DS1820 probe(PJ_14);

    printf("io thread started\n");
	while(true) {
        probe.convertTemperature(true, DS1820::all_devices);         //Start temperature conversion, wait until ready

        temperature1 = probe.temperature();
        // printf("It is %3.1f °C\n", temperature1);

        ThisThread::sleep_for(500ms);
    }
}

const char* io_thread_name = "io_thread";
Thread io_thread(osPriorityHigh1, 4096, nullptr, io_thread_name);

void io_init(){
    io_thread.start(io_thread_fn);
}