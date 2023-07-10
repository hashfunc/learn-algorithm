#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 1845

class TestParameters : public ::testing::TestWithParam<std::tuple<int, std::vector<std::vector<int>>, int>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[n, costs, expected] = GetParam();

    EXPECT_EQ(solution(n, costs), expected);
}

INSTANTIATE_TEST_SUITE_P(NAME, TestParameters,
                         ::testing::Values(std::make_tuple(
                             4, std::vector<std::vector<int>>{{0, 1, 1}, {0, 2, 2}, {1, 2, 5}, {1, 3, 1}, {2, 3, 8}},
                             4)));
