#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 1845

class TestParameters : public ::testing::TestWithParam<std::tuple<std::string, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &word = std::get<0>(GetParam());
  const auto &expected = std::get<1>(GetParam());

  EXPECT_EQ(solution(word), expected);
}

INSTANTIATE_TEST_SUITE_P(
    NAME,
    TestParameters,
    ::testing::Values(
        std::make_tuple("AAAAE", 6),
		std::make_tuple("AAAE", 10),
		std::make_tuple("I", 1563),
		std::make_tuple("EIO", 1189)
    )
);
