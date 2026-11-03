add_library(MathLibrary STATIC math.cpp)

target_include_directories(MathLibrary PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)