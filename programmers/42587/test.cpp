#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto priorities = std::vector<int>{2, 1, 3, 2};
  constexpr int location = 2;

  EXPECT_EQ(1, solution(priorities, location));
}

TEST(CASE, 2) {
  auto priorities = std::vector<int>{1, 1, 9, 1, 1, 1};
  constexpr int location = 0;

  EXPECT_EQ(5, solution(priorities, location));
}
