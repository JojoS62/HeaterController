/*
 * Copyright (c) 2021 Arm Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

DigitalOut led(LED1);

int main()
{
    printf("Application Hello\n");

    while(true) {
        led = !led;
        ThisThread::sleep_for(1s);
    }
    return 0;
}
