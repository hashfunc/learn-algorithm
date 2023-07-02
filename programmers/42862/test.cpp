#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42862

class TestParameters : public ::testing::TestWithParam<std::tuple<int, int, std::vector<int>, std::vector<int>>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[expected, n, lost, reserve] = GetParam();

    EXPECT_EQ(solution(n, lost, reserve), expected);
}

INSTANTIATE_TEST_SUITE_P(NAME, TestParameters,
                         ::testing::Values(std::make_tuple(5, 5, std::vector<int>{2, 4}, std::vector<int>{1, 3, 5}),
                                           std::make_tuple(4, 5, std::vector<int>{2, 4}, std::vector<int>{3}),
                                           std::make_tuple(2, 3, std::vector<int>{3}, std::vector<int>{1})));
