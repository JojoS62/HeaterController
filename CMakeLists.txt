cmake_minimum_required(VERSION 3.19)
cmake_policy(VERSION 3.19...3.22)

set(UPLOAD_METHOD_DEFAULT STM32CUBE)
set(STM32CUBE_UPLOAD_ENABLED TRUE)
set(STM32CUBE_CONNECT_COMMAND -c port=SWD reset=HWrst)
set(STM32CUBE_GDBSERVER_ARGS --swd)

set(MBED_PATH "${CMAKE_CURRENT_SOURCE_DIR}/mbed-os")
set(LIB_PATH "${CMAKE_CURRENT_SOURCE_DIR}/libs/")
set(MBED_APP_JSON_PATH mbed_app.json)
set(MBED_MEMAP_DEPTH 4)

include(mbed-os/tools/cmake/mbed_toolchain_setup.cmake)

project(HeaterController)

add_subdirectory(mbed-os)

add_subdirectory(app_Heatercontroller EXCLUDE_FROM_ALL)
add_subdirectory(app_Hello EXCLUDE_FROM_ALL)


