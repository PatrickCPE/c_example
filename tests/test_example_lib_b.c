#include "unity.h"
#include "../src/libs/example_lib_b.h"

void setUp(void) {
    // set stuff up here
    //Nothing to do here for us
}

void tearDown(void) {
    // clean stuff up here
    //Nothing to do here for us
}

void test_function_should_pass(void) {
    //test stuff
    TEST_ASSERT_EQUAL_INT(6, add_four(1,1,1,3));
}

void test_function_should_fail(void) {
    //more test stuff
    TEST_ASSERT_EQUAL_INT(5, add_four(1,1,1,3));
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_should_pass);
    RUN_TEST(test_function_should_fail);
    return UNITY_END();
}