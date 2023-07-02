#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42748

class TestParameters
    : public ::testing::TestWithParam<std::tuple<std::vector<int>, std::vector<std::vector<int>>, std::vector<int>>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[array, commands, expected] = GetParam();

    ASSERT_THAT(solution(array, commands), testing::ElementsAreArray(expected));
}

INSTANTIATE_TEST_SUITE_P(NAME, TestParameters,
                         ::testing::Values(std::make_tuple(std::vector<int>{1, 5, 2, 6, 3, 7, 4},
                                                           std::vector<std::vector<int>>{
                                                               {2, 5, 3}, {4, 4, 1}, {1, 7, 3}},
                                                           std::vector<int>{5, 6, 3})));
