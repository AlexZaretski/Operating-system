# CMake generated Testfile for 
# Source directory: D:/Универ/ОС/OS_lab2
# Build directory: D:/Универ/ОС/OS_lab2/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(MinMaxTest "D:/Универ/ОС/OS_lab2/build/Debug/MinMaxTest.exe")
  set_tests_properties(MinMaxTest PROPERTIES  _BACKTRACE_TRIPLES "D:/Универ/ОС/OS_lab2/CMakeLists.txt;19;add_test;D:/Универ/ОС/OS_lab2/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(MinMaxTest "D:/Универ/ОС/OS_lab2/build/Release/MinMaxTest.exe")
  set_tests_properties(MinMaxTest PROPERTIES  _BACKTRACE_TRIPLES "D:/Универ/ОС/OS_lab2/CMakeLists.txt;19;add_test;D:/Универ/ОС/OS_lab2/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(MinMaxTest "D:/Универ/ОС/OS_lab2/build/MinSizeRel/MinMaxTest.exe")
  set_tests_properties(MinMaxTest PROPERTIES  _BACKTRACE_TRIPLES "D:/Универ/ОС/OS_lab2/CMakeLists.txt;19;add_test;D:/Универ/ОС/OS_lab2/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(MinMaxTest "D:/Универ/ОС/OS_lab2/build/RelWithDebInfo/MinMaxTest.exe")
  set_tests_properties(MinMaxTest PROPERTIES  _BACKTRACE_TRIPLES "D:/Универ/ОС/OS_lab2/CMakeLists.txt;19;add_test;D:/Универ/ОС/OS_lab2/CMakeLists.txt;0;")
else()
  add_test(MinMaxTest NOT_AVAILABLE)
endif()
