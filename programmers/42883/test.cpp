#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42883

class TestParameters : public ::testing::TestWithParam<std::tuple<std::string, int, std::string>> {};

TEST_P(TestParameters, NAME) {
  const auto &[number, k, expected] = GetParam();

  EXPECT_EQ(solution(number, k), expected);
}

INSTANTIATE_TEST_SUITE_P(
    NAME,
    TestParameters,
    ::testing::Values(
        std::make_tuple("1924", 2, "94"),
        std::make_tuple("1231234", 3, "3234"),
        std::make_tuple("4177252841", 4, "775841")
    )
);
