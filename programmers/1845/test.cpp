#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 1845

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<int>, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &nums = std::get<0>(GetParam());
  const auto &expected = std::get<1>(GetParam());

  EXPECT_EQ(solution(nums), expected);
}

INSTANTIATE_TEST_SUITE_P(
    NAME,
    TestParameters,
    ::testing::Values(
        std::make_tuple(std::vector<int>{3, 1, 2, 3}, 2),
        std::make_tuple(std::vector<int>{3, 3, 3, 2, 2, 4}, 3),
        std::make_tuple(std::vector<int>{3, 3, 3, 2, 2, 2}, 2)
    )
);
