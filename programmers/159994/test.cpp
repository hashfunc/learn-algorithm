#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 1845

class TestParameters
    : public ::testing::TestWithParam<
          std::tuple<std::vector<std::string>, std::vector<std::string>, std::vector<std::string>, std::string>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[cards1, cards2, goal, result] = GetParam();

    EXPECT_EQ(solution(cards1, cards2, goal), result);
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(std::make_tuple(std::vector<std::string>{"i", "drink", "water"},
                                      std::vector<std::string>{"want", "to"},
                                      std::vector<std::string>{"i", "want", "to", "drink", "water"}, "Yes"),
                      std::make_tuple(std::vector<std::string>{"i", "water", "drink"},
                                      std::vector<std::string>{"want", "to"},
                                      std::vector<std::string>{"i", "want", "to", "drink", "water"}, "No")));
