#include <gtest/gtest.h>

#include "solution.hpp"

using namespace std::string_literals;

TEST(TEST_181952, TEST_1)
{
    auto str = "HelloWorld!"s;

    testing::internal::CaptureStdout();

    solution(str);

    const auto &result = testing::internal::GetCapturedStdout();

    EXPECT_EQ(result, str);
}
