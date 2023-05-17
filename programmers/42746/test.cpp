#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto numbers = std::vector<int>{6, 10, 2};

  EXPECT_EQ("6210", solution(numbers));
}

TEST(CASE, 2) {
  auto numbers = std::vector<int>{3, 30, 34, 5, 9};

  EXPECT_EQ("9534330", solution(numbers));
}
