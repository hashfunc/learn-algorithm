#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42626

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<int>, int, int>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[scoville, K, expected] = GetParam();

    EXPECT_EQ(solution(scoville, K), expected);
}

INSTANTIATE_TEST_SUITE_P(NAME, TestParameters,
                         ::testing::Values(std::make_tuple(std::vector<int>{1, 2, 3, 9, 10, 12}, 7, 2)));
