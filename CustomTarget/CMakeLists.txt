
cmake_minimum_required(VERSION 3.20)

project(CustomTarget LANGUAGES CXX)

add_executable(MyApp main.cpp)

add_custom_target(SayHello
    COMMAND ${CMAKE_COMMAND} -E echo "Hello from Custom Target!"
)
