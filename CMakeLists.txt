cmake_minimum_required(VERSION 3.19)
cmake_policy(VERSION 3.19)

# Initialize Mbed OS build system. 
# Note: This block must be before the include of app.cmake
set(MBED_APP_JSON_PATH mbed_app.json)
set(LIB_PATH "libs/")
set(${OpenOCD_SCRIPT_DIR} "d:/Program Files/openocd-0.12/share/openocd/scripts/")

set(MBED_CUSTOM_LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/mbed-disco-f769ni-SRAM2.ld)

include(mbed-os/tools/cmake/app.cmake)
add_subdirectory(mbed-os)
set(MICROPY_DIR true)           # force lvgl to create an interface lib
add_subdirectory(${LIB_PATH})


project(HeaterController)

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

add_library(lvgl ALIAS lvgl_interface)   # for compatibility with static/interface libs

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
