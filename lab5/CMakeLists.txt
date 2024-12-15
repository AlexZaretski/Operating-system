cmake_minimum_required(VERSION 3.23)
project(Server)

set(CMAKE_CXX_STANDARD 98)

add_compile_options(/DUNICODE /D_UNICODE)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

add_executable(client Client.cpp)
add_executable(server Server.cpp)
add_executable(tests test_main.cpp)

target_link_libraries(tests PRIVATE Boost::unit_test_framework)