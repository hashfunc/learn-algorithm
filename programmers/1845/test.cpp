#include <gtest/gtest.h>

#include "solution.hpp"

class TestParameters : public ::testing::TestWithParam<std::tuple<int, std::vector<int>>> {};

TEST_P(TestParameters, 1845) {
  const int &expected = std::get<0>(GetParam());
  const std::vector<int> &nums = std::get<1>(GetParam());

  EXPECT_EQ(solution(nums), expected);
}

INSTANTIATE_TEST_SUITE_P(
    1845,
    TestParameters,
    ::testing::Values(
        std::make_tuple(2, std::vector<int>{3, 1, 2, 3}),
        std::make_tuple(3, std::vector<int>{3, 3, 3, 2, 2, 4}),
        std::make_tuple(2, std::vector<int>{3, 3, 3, 2, 2, 2})
    )
);
