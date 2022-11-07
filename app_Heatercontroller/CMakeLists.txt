# Copyright (c) 2021 Arm Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

set(MICROPY_DIR TRUE)                       # force lvgl to create an interface lib
add_subdirectory(${LIB_PATH} libs)

add_library(lvgl ALIAS lvgl_interface)      # for compatibility with static/interface libs

# add subdirectories and build targets here
add_executable(HeaterControllerF769 
    src/main.cpp
    src/lvgl_interface.cpp
    src/lv_screens/lv_mainscreen.cpp
    src/system/storage.cpp
    src/system/network.cpp
    src/system/mqtt.cpp
    src/system/DS1820.cpp
    src/system/LL.cpp
    src/system/io.cpp
)

target_link_libraries(HeaterControllerF769
    PRIVATE
        mbed-os
        mbed-storage
        mbed-netsocket
        component_sdio
        lvglDriver
        MQTT_client
)

target_include_directories(HeaterControllerF769 
    PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}
        "${LIB_PATH}lvgl"
        "${LIB_PATH}lvglDriver"
)


mbed_set_post_build(HeaterControllerF769)

mbed_finalize_build()


