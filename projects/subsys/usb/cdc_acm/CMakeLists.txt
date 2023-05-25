# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

set(BOARD_ROOT ${CMAKE_CURRENT_LIST_DIR})
message(INFO " ${BOARD} compile as Master in this sample")

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(cdc_acm)

FILE(GLOB app_sources src/*.c)
target_sources(app PRIVATE ${app_sources})
