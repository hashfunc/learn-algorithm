#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto citations = std::vector<int>{3, 0, 6, 1, 5};

  EXPECT_EQ(3, solution(citations));
}
