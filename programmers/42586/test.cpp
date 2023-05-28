#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "solution.hpp"

#define NAME 42586

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<int>, std::vector<int>, std::vector<int>>> {};

TEST_P(TestParameters, NAME) {
  const auto &progresses = std::get<0>(GetParam());
  const auto &speeds = std::get<1>(GetParam());
  const auto &expected = std::get<2>(GetParam());

  ASSERT_THAT(solution(progresses, speeds), testing::ElementsAreArray(expected));
}

INSTANTIATE_TEST_SUITE_P(
	NAME,
	TestParameters,
	::testing::Values(
		std::make_tuple(std::vector<int>{93, 30, 55}, std::vector<int>{1, 30, 5}, std::vector<int>{2, 1}),
		std::make_tuple(std::vector<int>{95, 90, 99, 99, 80, 99}, std::vector<int>{1, 1, 1, 1, 1, 1}, std::vector<int>{1, 3, 2})
	)
);
