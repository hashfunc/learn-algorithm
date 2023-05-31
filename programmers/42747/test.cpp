#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42747

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<int>, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &[citations, expected] = GetParam();

  EXPECT_EQ(solution(citations), expected);
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
	TestParameters,
	::testing::Values(
		std::make_tuple(std::vector<int>{3, 0, 6, 1, 5}, 3)
	)
);
