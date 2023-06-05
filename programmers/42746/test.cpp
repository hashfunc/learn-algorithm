#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42746

class TestParameters : public ::testing::TestWithParam<
                           std::tuple<std::vector<int>, std::string>> {};

TEST_P(TestParameters, NAME) {
  const auto &[numbers, expected] = GetParam();

  EXPECT_EQ(solution(numbers), expected);
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(std::make_tuple(std::vector<int>{6, 10, 2}, "6210"),
                      std::make_tuple(std::vector<int>{3, 30, 34, 5, 9},
                                      "9534330")));
