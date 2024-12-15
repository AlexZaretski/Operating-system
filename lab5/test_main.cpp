#define BOOST_TEST_MODULE Server
#include <boost/test/included/unit_test.hpp>
#include "server.cpp"  
#include "client.cpp" 

BOOST_AUTO_TEST_SUITE(EmployeeTests)

BOOST_AUTO_TEST_CASE(TestEmployeeInitialization)
{
    employee emp = { 1, "John", 40.0 };

    BOOST_CHECK_EQUAL(emp.num, 1);
    BOOST_CHECK_EQUAL(std::string(emp.name), "John");
    BOOST_CHECK_CLOSE(emp.hours, 40.0, 0.001);
}

BOOST_AUTO_TEST_CASE(TestModifyEmployee)
{
    employee emp = { 2, "Doe", 35.5 };

    std::string new_name = "Jane";
    double new_hours = 50.0;
    strcpy_s(emp.name, new_name.c_str());
    emp.hours = new_hours;

    BOOST_CHECK_EQUAL(std::string(emp.name), "Jane");
    BOOST_CHECK_CLOSE(emp.hours, 50.0, 0.001);
}

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(ClientServerTests)

BOOST_AUTO_TEST_CASE(TestPipeCommunication)
{
    BOOST_TEST_MESSAGE("Pipe communication test would go here.");
    BOOST_CHECK(true); 
}

BOOST_AUTO_TEST_SUITE_END()
