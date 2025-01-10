cmake_minimum_required(VERSION 3.15)

project(cpp_tests)

find_package(GTest REQUIRED)

set(CPP_TEST_SOURCES
    test_b.cpp
)

add_executable(cpp_tests ${CPP_TEST_SOURCES})
target_link_libraries(cpp_tests PUBLIC GTest::GTest GTest::Main)
