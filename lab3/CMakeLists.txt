cmake_minimum_required (VERSION 3.8)
project(lab3)

set(CMAKE_CXX_STANDARD 98)
add_executable(lab3 lab3.cpp)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

if(Boost_FOUND)
enable_testing()

add_executable(test_lab3 test_lab3.cpp)
target_link_libraries(test_lab3 PRIVATE Boost::unit_test_framework)

add_test(NAME Lab3Test COMMAND test_lab3)
endif()
