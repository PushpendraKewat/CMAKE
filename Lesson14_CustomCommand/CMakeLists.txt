cmake_minimum_required(VERSION 3.20)

project(Lesson14 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(GENERATED_HEADER "${CMAKE_CURRENT_BINARY_DIR}/version.h")

add_custom_command(
    OUTPUT "${GENERATED_HEADER}"

    COMMAND ${CMAKE_COMMAND}
        "-DINPUT_FILE=${CMAKE_CURRENT_SOURCE_DIR}/version.txt"
        "-DOUTPUT_FILE=${GENERATED_HEADER}"
        -P "${CMAKE_CURRENT_SOURCE_DIR}/generate_version.cmake"

    DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/version.txt"
        "${CMAKE_CURRENT_SOURCE_DIR}/generate_version.cmake"

    COMMENT "Generating version.h"
    VERBATIM
)

add_executable(${PROJECT_NAME}
    main.cpp
    "${GENERATED_HEADER}"
)

target_include_directories(${PROJECT_NAME}
    PRIVATE "${CMAKE_CURRENT_BINARY_DIR}"
)