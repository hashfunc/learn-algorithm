#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 86971

class TestParameters : public ::testing::TestWithParam<std::tuple<int, std::vector<std::vector<int>>, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &[n, wires, expected] = GetParam();

  EXPECT_EQ(solution(n, wires), expected);
}

INSTANTIATE_TEST_SUITE_P(
    NAME,
    TestParameters,
    ::testing::Values(
        std::make_tuple(9, std::vector<std::vector<int>>{{1, 3}, {2, 3}, {3, 4}, {4, 5}, {4, 6}, {4, 7}, {7, 8}, {7, 9}}, 3),
        std::make_tuple(4, std::vector<std::vector<int>>{{1, 2}, {2, 3}, {3, 4}}, 0),
        std::make_tuple(7, std::vector<std::vector<int>>{{1, 2}, {2, 7}, {3, 7}, {3, 4}, {4, 5}, {6, 7}}, 1)
    )
);
