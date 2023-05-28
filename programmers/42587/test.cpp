#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42587

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<int>, int, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &priorities = std::get<0>(GetParam());
  const auto &location = std::get<1>(GetParam());
  const auto &expected = std::get<2>(GetParam());

  EXPECT_EQ(solution(priorities, location), expected);
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
	TestParameters,
	::testing::Values(
		std::make_tuple(std::vector<int>{2, 1, 3, 2}, 2, 1),
		std::make_tuple(std::vector<int>{1, 1, 9, 1, 1, 1}, 0, 5)
	)
);
