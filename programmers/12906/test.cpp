#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 12906

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<int>, std::vector<int>>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[arr, expected] = GetParam();

    ASSERT_THAT(solution(arr), testing::ElementsAreArray(expected));
}

INSTANTIATE_TEST_SUITE_P(NAME, TestParameters,
                         ::testing::Values(std::make_tuple(std::vector<int>{1, 1, 3, 3, 0, 1, 1},
                                                           std::vector<int>{1, 3, 0, 1}),
                                           std::make_tuple(std::vector<int>{4, 4, 4, 3, 3}, std::vector<int>{4, 3})));
