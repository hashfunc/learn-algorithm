#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42839

class TestParameters : public ::testing::TestWithParam<std::tuple<std::string, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &numbers = std::get<0>(GetParam());
  const auto &expected = std::get<1>(GetParam());

  EXPECT_EQ(solution(numbers), expected);
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
	TestParameters,
	::testing::Values(
		std::make_tuple("17", 3),
		std::make_tuple("011", 2)
	)
);
