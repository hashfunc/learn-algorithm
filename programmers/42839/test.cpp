#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42839

class TestParameters : public ::testing::TestWithParam<std::tuple<std::string, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &[numbers, expected] = GetParam();

  EXPECT_EQ(solution(numbers), expected);
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
	TestParameters,
	::testing::Values(
		std::make_tuple("17", 3),
		std::make_tuple("011", 2)
	)
);
