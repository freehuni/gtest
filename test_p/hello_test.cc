#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include "hello.h"

using namespace std;

class ParameterTest : public testing::TestWithParam<std::string> {	
};

TEST_P(ParameterTest, hello) {
	string param = GetParam();

	Hello test;

	EXPECT_TRUE(test.IsDigit(param));
}


INSTANTIATE_TEST_CASE_P(MyInst, ParameterTest, ::testing::Values("1", "a", "33"));