#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto jobs = std::vector<std::vector<int>>{{0, 3}, {1, 9}, {2, 6}};

  EXPECT_EQ(9, solution(jobs));
}
