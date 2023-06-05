#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42840

class TestParameters : public ::testing::TestWithParam<
                           std::tuple<std::vector<int>, std::vector<int>>> {};

TEST_P(TestParameters, NAME) {
  const auto &[answers, expected] = GetParam();

  ASSERT_THAT(solution(answers), testing::ElementsAreArray(expected));
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(std::make_tuple(std::vector<int>{1, 2, 3, 4, 5},
                                      std::vector<int>{1}),
                      std::make_tuple(std::vector<int>{1, 3, 2, 4, 2},
                                      std::vector<int>{1, 2, 3})));
