#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
    auto nums = std::vector<int>{3, 1, 2, 3};
    EXPECT_EQ(2, solution(nums));
}

TEST(CASE, 2) {
    auto nums = std::vector<int>{3, 3, 3, 2, 2, 4};
    EXPECT_EQ(3, solution(nums));
}

TEST(CASE, 3) {
    auto nums = std::vector<int>{3, 3, 3, 2, 2, 2};
    EXPECT_EQ(2, solution(nums));
}
