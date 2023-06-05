#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42576

class TestParameters
    : public ::testing::TestWithParam<std::tuple<
          std::vector<std::string>, std::vector<std::string>, std::string>> {};

TEST_P(TestParameters, NAME) {
  const auto &[participant, completion, expected] = GetParam();

  EXPECT_EQ(solution(participant, completion), expected);
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(
        std::make_tuple(std::vector<std::string>{"leo", "kiki", "eden"},
                        std::vector<std::string>{"eden", "kiki"}, "leo"),
        std::make_tuple(std::vector<std::string>{"marina", "josipa", "nikola",
                                                 "vinko", "filipa"},
                        std::vector<std::string>{"josipa", "filipa", "marina",
                                                 "nikola"},
                        "vinko"),
        std::make_tuple(
            std::vector<std::string>{"mislav", "stanko", "mislav", "ana"},
            std::vector<std::string>{"stanko", "ana", "mislav"}, "mislav")));
