#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
    constexpr int bridge_length = 2;
    constexpr int weight = 10;
    auto truck_weights = std::vector<int>{7, 4, 5, 6};

    EXPECT_EQ(8, solution(bridge_length, weight, truck_weights));
}

TEST(CASE, 2) {
    constexpr int bridge_length = 100;
    constexpr int weight = 100;
    auto truck_weights = std::vector<int>{10};

    EXPECT_EQ(101, solution(bridge_length, weight, truck_weights));
}

TEST(CASE, 3) {
    constexpr int bridge_length = 100;
    constexpr int weight = 100;
    auto truck_weights = std::vector<int>{10, 10, 10, 10, 10, 10, 10, 10, 10, 10};

    EXPECT_EQ(110, solution(bridge_length, weight, truck_weights));
}
