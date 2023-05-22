#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
  std::vector<std::vector<int>> sizes = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};

  EXPECT_EQ(4000, solution(sizes));
}

TEST(CASE, 2) {
  std::vector<std::vector<int>> sizes = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

  EXPECT_EQ(120, solution(sizes));
}

TEST(CASE, 3) {
  std::vector<std::vector<int>> sizes = {{14, 4}, {19, 6}, {6, 16}, {18, 7}, {7, 11}};

  EXPECT_EQ(133, solution(sizes));
}
