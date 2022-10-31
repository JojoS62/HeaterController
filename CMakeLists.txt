cmake_minimum_required(VERSION 3.19)
cmake_policy(VERSION 3.19)

# Initialize Mbed OS build system. 
# Note: This block must be before the include of app.cmake
set(MBED_APP_JSON_PATH mbed_app.json)
set(LIB_PATH "libs/")
set(${OpenOCD_SCRIPT_DIR} "d:/Program Files/openocd-0.12/share/openocd/scripts/")

include(mbed-os/tools/cmake/app.cmake)
add_subdirectory(mbed-os)

project(HeaterController)

# add subdirectories and build targets here
add_executable(HeaterControllerF769 
    src/main.cpp
    src/lvgl_interface.cpp
)

set(MICROPY_DIR true)           # force lvgl to create an interface lib
add_subdirectory(${LIB_PATH}sdio)
add_subdirectory(${LIB_PATH}bsp)
add_subdirectory(${LIB_PATH}lvgl)
add_subdirectory(${LIB_PATH}lvglDriver)


add_library(lvgl ALIAS lvgl_interface)   # for compatibility with static/interface libs

target_link_libraries(HeaterControllerF769
    PRIVATE
        mbed-os
        mbed-storage
        component_sdio
        lvglDriver
)

target_include_directories(HeaterControllerF769 
    PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}
        "${LIB_PATH}lvgl"
        "${LIB_PATH}lvglDriver"
)


mbed_set_post_build(HeaterControllerF769)

mbed_finalize_build()
