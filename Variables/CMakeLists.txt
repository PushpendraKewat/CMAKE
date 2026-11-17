cmake_minimum_required(VERSION 3.20)

project(Variables LANGUAGES CXX)

set(APP_VERSION "1.0" CACHE STRING "Application version")

message(STATUS "Application Version: ${APP_VERSION}")

add_executable(MyApp main.cpp)