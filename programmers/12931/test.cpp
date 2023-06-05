#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 12931

class TestParameters : public ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &[N, answer] = GetParam();

  EXPECT_EQ(solution(N), answer);
}

INSTANTIATE_TEST_SUITE_P(NAME, TestParameters,
                         ::testing::Values(std::make_tuple(123, 6),
                                           std::make_tuple(987, 24)));
