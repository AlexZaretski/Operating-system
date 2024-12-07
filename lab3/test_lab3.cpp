#define BOOST_TEST_MODULE Lab3Test
#include <boost/test/included/unit_test.hpp>
#include "lab3.h"

BOOST_AUTO_TEST_CASE(ArrayInitialization) {
    array_size = 10;
    arr = new int[array_size]();

    for (int i = 0; i < array_size; ++i) {
        BOOST_CHECK_EQUAL(arr[i], 0);
    }

    delete[] arr;
}

BOOST_AUTO_TEST_CASE(CriticalSectionTest) {
    InitializeCriticalSection(&cs);
    EnterCriticalSection(&cs);
    BOOST_CHECK_NO_THROW(LeaveCriticalSection(&cs));
    DeleteCriticalSection(&cs);
}
