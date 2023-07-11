#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42884

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<std::vector<int>>, int>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[routes, expected] = GetParam();

    EXPECT_EQ(solution(routes), expected);
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(std::make_tuple(std::vector<std::vector<int>>{{-20, -15}, {-14, -5}, {-18, -13}, {-5, -3}}, 2)));
