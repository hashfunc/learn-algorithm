#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 155652

class TestParameters : public ::testing::TestWithParam<std::tuple<std::string, std::string, int, std::string>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[s, skip, index, result] = GetParam();

    EXPECT_EQ(solution(s, skip, index), result);
}

INSTANTIATE_TEST_SUITE_P(NAME, TestParameters, ::testing::Values(std::make_tuple("aukks", "wbqd", 5, "happy")));
