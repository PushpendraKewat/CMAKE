cmake_minimum_required(VERSION 3.20)

project(CalculatorProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Calculator
    src/main.cpp
    src/calculator.cpp
)

target_include_directories(Calculator PRIVATE include)

if(MSVC)
    target_compile_options(Calculator PRIVATE /W4)
else()
    target_compile_options(Calculator PRIVATE -Wall -Wextra -Wpedantic)
endif()