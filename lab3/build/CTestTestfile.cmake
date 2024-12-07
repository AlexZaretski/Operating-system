# CMake generated Testfile for 
# Source directory: D:/Operating-system/lab3
# Build directory: D:/Operating-system/lab3/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(Lab3Test "D:/Operating-system/lab3/build/Debug/test_lab3.exe")
  set_tests_properties(Lab3Test PROPERTIES  _BACKTRACE_TRIPLES "D:/Operating-system/lab3/CMakeLists.txt;15;add_test;D:/Operating-system/lab3/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(Lab3Test "D:/Operating-system/lab3/build/Release/test_lab3.exe")
  set_tests_properties(Lab3Test PROPERTIES  _BACKTRACE_TRIPLES "D:/Operating-system/lab3/CMakeLists.txt;15;add_test;D:/Operating-system/lab3/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(Lab3Test "D:/Operating-system/lab3/build/MinSizeRel/test_lab3.exe")
  set_tests_properties(Lab3Test PROPERTIES  _BACKTRACE_TRIPLES "D:/Operating-system/lab3/CMakeLists.txt;15;add_test;D:/Operating-system/lab3/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(Lab3Test "D:/Operating-system/lab3/build/RelWithDebInfo/test_lab3.exe")
  set_tests_properties(Lab3Test PROPERTIES  _BACKTRACE_TRIPLES "D:/Operating-system/lab3/CMakeLists.txt;15;add_test;D:/Operating-system/lab3/CMakeLists.txt;0;")
else()
  add_test(Lab3Test NOT_AVAILABLE)
endif()
