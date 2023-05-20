#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
  std::string numbers = "17";

  EXPECT_EQ(3, solution(numbers));
}

TEST(CASE, 2) {
  std::string numbers = "011";

  EXPECT_EQ(2, solution(numbers));
}
