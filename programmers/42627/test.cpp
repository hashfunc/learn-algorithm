#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42627

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<std::vector<int>>, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &[jobs, expected] = GetParam();

  EXPECT_EQ(solution(jobs), expected);
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
	TestParameters,
	::testing::Values(
		std::make_tuple(std::vector<std::vector<int>>{{0, 3}, {1, 9}, {2, 6}}, 9)
	)
);
