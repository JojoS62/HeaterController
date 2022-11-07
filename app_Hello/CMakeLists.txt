# Copyright (c) 2021 Arm Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_executable(app_hello main.cpp)

target_link_libraries(app_hello mbed-os)

mbed_set_post_build(app_hello)
