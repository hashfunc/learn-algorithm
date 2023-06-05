#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 12906

class TestParameters
    : public ::testing::TestWithParam<
          std::tuple<std::vector<std::string>, std::vector<std::string>,
                     std::vector<std::string>>> {};

TEST_P(TestParameters, NAME) {
  const auto &[players, callings, result] = GetParam();

  ASSERT_THAT(solution(players, callings), testing::ElementsAreArray(result));
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(std::make_tuple(
        std::vector<std::string>{"mumu", "soe", "poe", "kai", "mine"},
        std::vector<std::string>{"kai", "kai", "mine", "mine"},
        std::vector<std::string>{"mumu", "kai", "mine", "soe", "poe"})));
