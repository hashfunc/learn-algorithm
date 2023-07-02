#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42579

class TestParameters
    : public ::testing::TestWithParam<std::tuple<std::vector<std::string>, std::vector<int>, std::vector<int>>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[genres, players, expected] = GetParam();

    ASSERT_THAT(solution(genres, players), testing::ElementsAreArray(expected));
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(std::make_tuple(std::vector<std::string>{"classic", "pop", "classic", "classic", "pop"},
                                      std::vector<int>{500, 600, 150, 800, 2500}, std::vector<int>{4, 1, 3, 0})));
