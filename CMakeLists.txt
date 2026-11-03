cmake_minimum_required(VERSION 3.20)

project(MyApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MyApp main.cpp)

target_sources(MyApp PRIVATE math.cpp)
target_compile_options(MyApp PRIVATE /W4)