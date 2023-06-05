#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42628

class TestParameters
    : public ::testing::TestWithParam<
          std::tuple<std::vector<std::string>, std::vector<int>>> {};

TEST_P(TestParameters, NAME) {
  const auto &[operations, expected] = GetParam();

  ASSERT_THAT(solution(operations), testing::ElementsAreArray(expected));
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(
        std::make_tuple(std::vector<std::string>{"I 16", "I -5643", "D -1",
                                                 "D 1", "D 1", "I 123", "D -1"},
                        std::vector<int>{0, 0}),
        std::make_tuple(std::vector<std::string>{"I -45", "I 653", "D 1",
                                                 "I -642", "I 45", "I 97",
                                                 "D 1", "D -1", "I 333"},
                        std::vector<int>{333, -45})));
