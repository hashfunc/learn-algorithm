#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto scoville = std::vector<int>{1, 2, 3, 9, 10, 12};
  constexpr int K = 7;

  EXPECT_EQ(2, solution(scoville, K));
}
