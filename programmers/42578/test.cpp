#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42578

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<std::vector<std::string>>, int>> {};

TEST_P(TestParameters, NAME) {
  const auto &[clothes, expected] = GetParam();

  EXPECT_EQ(solution(clothes), expected);
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
	TestParameters,
	::testing::Values(
		std::make_tuple(std::vector<std::vector<std::string>>{{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}}, 5),
		std::make_tuple(std::vector<std::vector<std::string>>{{"crow_mask", "face"}, {"blue_sunglasses", "face"}, {"smoky_makeup", "face"}}, 3)
	)
);
