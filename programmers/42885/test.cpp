#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42885

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<int>, int, int>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[people, limit, expected] = GetParam();

    EXPECT_EQ(solution(people, limit), expected);
}

INSTANTIATE_TEST_SUITE_P(NAME, TestParameters,
                         ::testing::Values(std::make_tuple(std::vector<int>{70, 50, 80, 50}, 100, 3),
                                           std::make_tuple(std::vector<int>{70, 80, 50}, 100, 3)));
