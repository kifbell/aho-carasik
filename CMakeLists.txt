cmake_minimum_required(VERSION 3.20)
project(toupload)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(toupload
        ahocorasick.h
        main.cpp
        tries.h)
