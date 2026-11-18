cmake_minimum_required(VERSION 3.20)

project(Lesson15 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MyApp main.cpp)

# Custom target to run the application
add_custom_target(RunApp
    COMMAND $<TARGET_FILE:MyApp>
    DEPENDS MyApp
    USES_TERMINAL
)

# Custom target to display project information
add_custom_target(ProjectInfo
    COMMAND ${CMAKE_COMMAND} -E echo "Project: ${PROJECT_NAME}"
    COMMAND ${CMAKE_COMMAND} -E echo "C++ Standard: 23"
)