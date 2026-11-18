cmake_minimum_required(VERSION 3.20)

project(Lesson16 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MyApp
    main.cpp
    calculator.cpp
)

# Testing
enable_testing()

add_executable(CalculatorTests
    tests/test_calculator.cpp
    calculator.cpp
)

add_test(
    NAME AdditionTest
    COMMAND CalculatorTests
)

add_test(
    NAME ApplicationTest
    COMMAND MyApp
)
set_tests_properties(
    AdditionTest
    PROPERTIES
        TIMEOUT 5
        LABELS "unit"
)
add_test(
    NAME SetupTest
    COMMAND ${CMAKE_COMMAND} -E touch
            "${CMAKE_CURRENT_BINARY_DIR}/test_database.txt"
)

set_tests_properties(
    SetupTest
    PROPERTIES FIXTURES_SETUP DatabaseFixture
)

add_test(
    NAME DatabaseTest
    COMMAND ${CMAKE_COMMAND} -E echo
            "Running database test"
)

set_tests_properties(
    DatabaseTest
    PROPERTIES FIXTURES_REQUIRED DatabaseFixture
)

add_test(
    NAME CleanupTest
    COMMAND ${CMAKE_COMMAND} -E rm -f
            "${CMAKE_CURRENT_BINARY_DIR}/test_database.txt"
)

set_tests_properties(
    CleanupTest
    PROPERTIES FIXTURES_CLEANUP DatabaseFixture
)
add_test(
    NAME FirstTest
    COMMAND ${CMAKE_COMMAND} -E echo "First test"
)

add_test(
    NAME SecondTest
    COMMAND ${CMAKE_COMMAND} -E echo "Second test"
)

set_tests_properties(
    SecondTest
    PROPERTIES DEPENDS FirstTest
)