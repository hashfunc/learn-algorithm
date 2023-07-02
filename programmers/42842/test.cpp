#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42842

class TestParameters : public ::testing::TestWithParam<std::tuple<int, int, std::vector<int>>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[brown, yellow, expected] = GetParam();

    EXPECT_EQ(solution(brown, yellow), expected);
}

INSTANTIATE_TEST_SUITE_P(NAME, TestParameters,
                         ::testing::Values(std::make_tuple(10, 2, std::vector<int>{4, 3}),
                                           std::make_tuple(8, 1, std::vector<int>{3, 3}),
                                           std::make_tuple(24, 24, std::vector<int>{8, 6})));
