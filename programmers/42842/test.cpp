#include <gtest/gtest.h>

#include "solution.hpp"

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<int>, int, int>> {};

TEST_P(TestParameters, 42842) {
  const std::vector<int> &expected = std::get<0>(GetParam());
  const int &brown = std::get<1>(GetParam());
  const int &yellow = std::get<2>(GetParam());

  EXPECT_EQ(solution(brown, yellow), expected);
}

INSTANTIATE_TEST_SUITE_P(
    42842,
    TestParameters,
    ::testing::Values(
        std::make_tuple(std::vector<int>{4, 3}, 10, 2),
        std::make_tuple(std::vector<int>{3, 3}, 8, 1),
        std::make_tuple(std::vector<int>{8, 6}, 24, 24)
    )
);
