/**
 * @file test_main.cpp
 *
 * The main runner file for ETC unit tests. (This file does not test {@code main.cpp}).
 *
 * Include test file headers in the specified section, then add test cases to {@code run_all_tests}.
 *
 * @author Jonathan Uhler
 */


// Unity allows for a `unity_config.h` header file for programmer-defined configuration. If we
// don't have/use this, we don't need to include it.
#undef UNITY_INCLUDE_CONFIG_H


// Include other test files here. Remember to add test cases to the "run_all_tests" function!

// Standard headers begin here
#include "mbed.h"
#include "unity.h"
#include <iostream>


/**
 * Add programmer-defined tests here.
 */
void run_all_tests() {
    // Use the RUN_TEST(<function_name>) macro here
}


/**
 * Set up function for Unity tests.
 *
 * DO NOT MODIFY! If you are just adding new tests, read the header comment in this file.
 */
void setUp() {
    // Do nothing
}


/**
 * Teardown function for Unity tests.
 *
 * DO NOT MODIFY! If you are just adding new tests, read the header comment in this file.
 */
void tearDown() {
    // Do nothing
}


/**
 * Entry point for running tests.
 *
 * DO NOT MODIFY! If you are just adding new tests, read the header comment in this file.
 *
 * @return A zero status code if all tests pass, and non-zero if any test failed.
 */
int main() {
    UNITY_BEGIN();
    run_all_tests();
    UNITY_END();

    while (true) {
        continue;
    }

    return 0;
}
