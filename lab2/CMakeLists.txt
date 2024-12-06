cmake_minimum_required (VERSION 3.8)
project ("OS_lab2")

set(CMAKE_CXX_STANDARD 98)
add_executable (OS_lab2 src/main.cpp)

#set(BOOST_ROOT "D:/boost_1_86_0")
#set(BOOST_INCLUDEDIR "${BOOST_ROOT}/include")
#set(BOOST_LIBRARYDIR "${BOOST_ROOT}/lib")

find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIRS})
if(Boost_FOUND)
enable_testing()

add_executable(MinMaxTest tests/test_min_max.cpp)
target_link_libraries(MinMaxTest ${Boost_LIBRARIES})
add_test(NAME MinMaxTest COMMAND MinMaxTest)
endif()
