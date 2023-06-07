#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 131705

class TestParameters
    : public ::testing::TestWithParam<std::tuple<std::vector<int>, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &[number, result] = GetParam();

  EXPECT_EQ(solution(number), result);
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(std::make_tuple(std::vector<int>{-2, 3, 0, 2, -5}, 2),
                      std::make_tuple(std::vector<int>{-3, -2, -1, 0, 1, 2, 3},
                                      5),
                      std::make_tuple(std::vector<int>{-1, 1, -1, 1}, 0)));
