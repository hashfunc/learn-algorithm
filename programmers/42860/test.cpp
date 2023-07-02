#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42860

class TestParameters : public ::testing::TestWithParam<std::tuple<std::string, int>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[name, expected] = GetParam();

    EXPECT_EQ(solution(name), expected);
}

INSTANTIATE_TEST_SUITE_P(NAME, TestParameters,
                         ::testing::Values(std::make_tuple("JEROEN", 56), std::make_tuple("JAN", 23)));
