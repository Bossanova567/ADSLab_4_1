cmake_minimum_required(VERSION 3.23)
project(ADSLab_4_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ADSLab_4_1
        Hash.cpp
        Hash.h
        main.cpp)
