#define BOOST_TEST_MODULE SenderReceiverTests
#include <boost/test/included/unit_test.hpp>
#include <fstream>
#include <string>
#include <windows.h>

BOOST_AUTO_TEST_CASE(SemaphoreCreationTest) {
    HANDLE hInputSemaphore = CreateSemaphore(NULL, 0, 10, L"TestInputSemaphore");
    HANDLE hOutputSemaphore = CreateSemaphore(NULL, 0, 10, L"TestOutputSemaphore");

    BOOST_CHECK(hInputSemaphore != NULL);
    BOOST_CHECK(hOutputSemaphore != NULL);

    CloseHandle(hInputSemaphore);
    CloseHandle(hOutputSemaphore);
}

BOOST_AUTO_TEST_CASE(FileWriteReadTest) {
    std::string file_name = "test_file.txt";

    std::ofstream out_file(file_name);
    BOOST_REQUIRE(out_file.is_open());
    out_file << "Test message";
    out_file.close();

    std::ifstream in_file(file_name);
    BOOST_REQUIRE(in_file.is_open());

    std::string read_message;
    std::getline(in_file, read_message);

    BOOST_CHECK_EQUAL(read_message, "Test message");

    in_file.close();
    std::remove(file_name.c_str());
}
