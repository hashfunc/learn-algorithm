#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42583

class TestParameters : public ::testing::TestWithParam<std::tuple<int, int, std::vector<int>, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &[bridge_length, weight, truck_weight, expected] = GetParam();

  EXPECT_EQ(solution(bridge_length, weight, truck_weight), expected);
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
	TestParameters,
	::testing::Values(
		std::make_tuple(2, 10, std::vector<int>{7, 4, 5, 6}, 8),
		std::make_tuple(100, 100, std::vector<int>{10}, 101),
		std::make_tuple(100, 100, std::vector<int>{10, 10, 10, 10, 10, 10, 10, 10, 10, 10}, 110)
	)
);
