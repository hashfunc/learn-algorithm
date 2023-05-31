#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 12909

class TestParameters : public ::testing::TestWithParam<std::tuple<std::string, bool>> {};

TEST_P(TestParameters, NAME) {
  const auto &[s, expected] = GetParam();

  EXPECT_EQ(solution(s), expected);
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
	TestParameters,
	::testing::Values(
		std::make_tuple("()()", true),
		std::make_tuple("(())()", true),
		std::make_tuple(")()(", false),
		std::make_tuple("(()(", false)
	)
);
