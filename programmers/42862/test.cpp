#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42862

class TestParameters : public ::testing::TestWithParam<std::tuple<int, std::vector<int>, std::vector<int>, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &n = std::get<0>(GetParam());
  const auto &lost = std::get<1>(GetParam());
  const auto &reserve = std::get<2>(GetParam());
  const auto &expected = std::get<3>(GetParam());

  EXPECT_EQ(solution(n, lost, reserve), expected);
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
	TestParameters,
	::testing::Values(
		std::make_tuple(5, std::vector<int>{2, 4}, std::vector<int>{1, 3, 5}, 5),
		std::make_tuple(5, std::vector<int>{2, 4}, std::vector<int>{3}, 4),
		std::make_tuple(3, std::vector<int>{3}, std::vector<int>{1}, 2)
	)
);
