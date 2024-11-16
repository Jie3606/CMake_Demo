cmake_minimum_required(VERSION 3.5.0)
project(CDemo VERSION 0.1.0 LANGUAGES C)

add_executable(CDemo ./src/main.c ./src/test.c)

target_include_directories(CDemo PRIVATE include)
