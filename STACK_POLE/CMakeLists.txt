cmake_minimum_required(VERSION 3.27)
project(STACK_POLE)

set(CMAKE_CXX_STANDARD 17)

add_executable(STACK_POLE main.cpp
        stack.cpp
        stack.h)
