# Copyright (c) 2021 Arm Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

set(MICROPY_DIR TRUE)                       # force lvgl to create an interface lib
add_subdirectory(${LIB_PATH} libs)

add_library(lvgl ALIAS lvgl_interface)      # for compatibility with static/interface libs

# add subdirectories and build targets here
add_executable(HeaterController 
    src/main.cpp
    src/lvgl_interface.cpp
    src/lv_screens/lv_mainscreen.cpp
    src/system/storage.cpp
    src/system/network.cpp
    src/system/mqtt.cpp
    src/system/DS1820.cpp
    src/system/LL.cpp
    src/system/io.cpp
    src/lv_screens/ui.cpp
    src/lv_screens/ui_helpers.cpp
    src/lv_screens/ui_img_icn_play_png.c
    src/lv_screens/ui_img_icn_play_rev_png.c
)

target_link_libraries(HeaterController
    PRIVATE
        mbed-os
        mbed-storage
        mbed-netsocket
        component_sdio
        lvglDriver
        MQTT_client
)

target_include_directories(HeaterController 
    PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}
        "${LIB_PATH}lvgl"
        "${LIB_PATH}lvglDriver"
        src
        ${LIB_PATH}
)

if("DISCO_F769NI" IN_LIST MBED_TARGET_LABELS)
    set(CUSTOM_LINKER_SCRIPT  mbed-disco-f769ni-SRAM2.ld)
endif()

mbed_set_post_build(HeaterController ${CUSTOM_LINKER_SCRIPT})



