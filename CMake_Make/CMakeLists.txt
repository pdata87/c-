cmake_minimum_required(VERSION 3.5)
project(CMake_Make)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp function.cpp function.h)
add_executable(CMake_Make ${SOURCE_FILES})