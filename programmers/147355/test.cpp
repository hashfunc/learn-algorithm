#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 147355

class TestParameters : public ::testing::TestWithParam<
                           std::tuple<std::string, std::string, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &[t, p, result] = GetParam();

  EXPECT_EQ(solution(t, p), result);
}

INSTANTIATE_TEST_SUITE_P(NAME, TestParameters,
                         ::testing::Values(std::make_tuple("3141592", "271", 2),
                                           std::make_tuple("500220839878", "7", 8),
                                           std::make_tuple("10203", "15", 3)));
