cmake_minimum_required(VERSION 3.27)
project(CH07EXAMPLE1)

set(CMAKE_CXX_STANDARD 17)

add_executable(CH07EXAMPLE1 main.cpp
        Restaurant.cpp
        Restaurant.h)
