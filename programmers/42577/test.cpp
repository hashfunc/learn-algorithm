#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 42577

class TestParameters : public ::testing::TestWithParam<std::tuple<std::vector<std::string>, bool>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[phone_book, expected] = GetParam();

    EXPECT_EQ(solution(phone_book), expected);
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(std::make_tuple(std::vector<std::string>{"119", "97674223", "1195524421"}, false),
                      std::make_tuple(std::vector<std::string>{"123", "456", "789"}, true),
                      std::make_tuple(std::vector<std::string>{"12", "123", "1235", "567", "88"}, false)));
