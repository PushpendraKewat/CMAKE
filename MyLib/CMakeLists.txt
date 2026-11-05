cmake_minimum_required(VERSION 3.20)

project(MyLib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Static Library
add_library(MyLib STATIC
    src/mylib.cpp
)

target_include_directories(MyLib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Executable
add_executable(MyApp
    src/main.cpp
)

# Link Library
target_link_libraries(MyApp PRIVATE MyLib)

# Compiler Warnings
if(MSVC)
    target_compile_options(MyLib PRIVATE /W4)
    target_compile_options(MyApp PRIVATE /W4)
else()
    target_compile_options(MyLib PRIVATE -Wall -Wextra -Wpedantic)
    target_compile_options(MyApp PRIVATE -Wall -Wextra -Wpedantic)
endif()