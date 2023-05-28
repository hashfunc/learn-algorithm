#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "solution.hpp"

#define NAME 42584

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<int>, std::vector<int>>> {};

TEST_P(TestParameters, NAME) {
  const auto &prices = std::get<0>(GetParam());
  const auto &expected = std::get<1>(GetParam());

  ASSERT_THAT(solution(prices), testing::ElementsAreArray(expected));
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
	TestParameters,
	::testing::Values(
		std::make_tuple(std::vector<int>{1, 2, 3, 2, 3}, std::vector<int>{4, 3, 1, 1, 0})
	)
);
