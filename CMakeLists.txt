cmake_minimum_required(VERSION 3.19)
cmake_policy(VERSION 3.19)

set(MBED_PATH "${CMAKE_CURRENT_SOURCE_DIR}/mbed-os")
set(LIB_PATH "${CMAKE_CURRENT_SOURCE_DIR}/libs/")
set(MBED_CUSTOM_LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/mbed-disco-f769ni-SRAM2.ld)
set(MBED_APP_JSON_PATH mbed_app.json)

include(mbed-os/tools/cmake/app.cmake)

project(HeaterController)

add_subdirectory(mbed-os)

add_subdirectory(app_Hello)
add_subdirectory(app_Heatercontroller)

