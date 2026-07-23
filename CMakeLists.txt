cmake_minimum_required(VERSION 3.20)

project(OpenCPU16)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(OpenCPU16
    src/main.cpp
    src/cpu.cpp
    src/memory.cpp
    src/alu.cpp
    src/decoder.cpp
)