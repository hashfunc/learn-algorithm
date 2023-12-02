#include <gtest/gtest.h>

#include "solution.hpp"

using namespace std::string_literals;

TEST(TEST_181951, TEST_1)
{
    int a = 4;
    int b = 5;

    const auto expected = "a = 4\nb = 5"s;

    testing::internal::CaptureStdout();

    solution(a, b);

    const auto &result = testing::internal::GetCapturedStdout();

    EXPECT_EQ(expected, result);
}
