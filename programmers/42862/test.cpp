#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
  constexpr int n = 5;
  std::vector<int> lost = {2, 4};
  std::vector<int> reserve = {1, 3, 5};

  EXPECT_EQ(5, solution(n, lost, reserve));
}

TEST(CASE, 2) {
  constexpr int n = 5;
  std::vector<int> lost = {2, 4};
  std::vector<int> reserve = {3};

  EXPECT_EQ(4, solution(n, lost, reserve));
}

TEST(CASE, 3) {
  constexpr int n = 3;
  std::vector<int> lost = {3};
  std::vector<int> reserve = {1};

  EXPECT_EQ(2, solution(n, lost, reserve));
}
