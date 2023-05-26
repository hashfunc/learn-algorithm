#include <gtest/gtest.h>

#include "solution.hpp"

class TestParameters : public ::testing::TestWithParam<std::tuple<int, std::vector<std::vector<int>>, int>> {};

TEST_P(TestParameters, 87946) {
  const int &k = std::get<0>(GetParam());
  const std::vector<std::vector<int>> &dungeons = std::get<1>(GetParam());
  const int &expected = std::get<2>(GetParam());

  EXPECT_EQ(solution(k, dungeons), expected);
}

INSTANTIATE_TEST_SUITE_P(
    87946,
    TestParameters,
    ::testing::Values(
        std::make_tuple(80, std::vector<std::vector<int>>{{80, 20}, {50, 40}, {30, 10}}, 3)
    )
);
