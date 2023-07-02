#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 86491

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<std::vector<int>>, int>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[sizes, expected] = GetParam();

    EXPECT_EQ(solution(sizes), expected);
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(std::make_tuple(std::vector<std::vector<int>>{{60, 50}, {30, 70}, {60, 30}, {80, 40}}, 4000),
                      std::make_tuple(std::vector<std::vector<int>>{{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}}, 120),
                      std::make_tuple(std::vector<std::vector<int>>{{14, 4}, {19, 6}, {6, 16}, {18, 7}, {7, 11}},
                                      133)));
