cmake_minimum_required(VERSION 3.20)

project(MyApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# External dependencies
add_subdirectory(external/glfw)

# Main executable
add_executable(${PROJECT_NAME}
    main.cpp
    math.cpp
)

# Link libraries
target_link_libraries(${PROJECT_NAME}
    PRIVATE glfw
)

# Compiler warnings
if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
endif()