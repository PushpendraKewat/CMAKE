cmake_minimum_required(VERSION 3.20)

project(Options LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(ENABLE_LOGGING "Enable application logging" ON)
option(ENABLE_DEBUG_INFO "Enable debug information message" OFF)

add_executable(MyApp main.cpp)

if(ENABLE_LOGGING)
    target_compile_definitions(MyApp PRIVATE ENABLE_LOGGING)
endif()

if(ENABLE_DEBUG_INFO)
    target_compile_definitions(MyApp PRIVATE ENABLE_DEBUG_INFO)
endif()