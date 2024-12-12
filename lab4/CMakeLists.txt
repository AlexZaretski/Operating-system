cmake_minimum_required(VERSION 3.23)
project(SenderReceiver)

set(CMAKE_CXX_STANDARD 98)

add_compile_options(/DUNICODE /D_UNICODE)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

add_executable(receiver receiver.cpp)
add_executable(sender sender.cpp)
add_executable(tests tests.cpp)

target_link_libraries(tests PRIVATE Boost::unit_test_framework)
