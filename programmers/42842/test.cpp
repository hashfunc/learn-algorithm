#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42842

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<int>, int, int>> {};

TEST_P(TestParameters, NAME) {
  const std::vector<int> &expected = std::get<0>(GetParam());
  const int &brown = std::get<1>(GetParam());
  const int &yellow = std::get<2>(GetParam());

  EXPECT_EQ(solution(brown, yellow), expected);
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
    TestParameters,
    ::testing::Values(
        std::make_tuple(std::vector<int>{4, 3}, 10, 2),
        std::make_tuple(std::vector<int>{3, 3}, 8, 1),
        std::make_tuple(std::vector<int>{8, 6}, 24, 24)
    )
);
