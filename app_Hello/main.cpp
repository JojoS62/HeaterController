/*
 * Copyright (c) 2021 Arm Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <malloc.h> 

DigitalOut led(LED1);

volatile char dummy[2048]; 

int main()
{
    printf("Hello from "  MBED_STRINGIFY(TARGET_NAME) "\n");
    printf("Mbed OS version: %d.%d.%d\n\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);

    dummy[0] = 42;

    size_t size = 512;

    void *p1 = malloc(size);
    printf("pointer p1: %p\n", p1);
    fflush(stdout);

    void *p2 = malloc(size);
    printf("pointer p2: %p\n", p2);
    fflush(stdout);

    void *p3 = memalign(32, size); // aligned_alloc(32, size);
    printf("pointer p3: %p\n", p3);
    fflush(stdout);


    while(true) {
        led = !led;
        ThisThread::sleep_for(1s);
    }
    return 0;
}

// workaround for missing functions since gcc 11.3
// should never be called
extern "C" {
    void _kill() { __BKPT (); };
    void _getpid() { __BKPT (); };
}