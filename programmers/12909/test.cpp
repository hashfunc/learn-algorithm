#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
  std::string s = "()()";

  EXPECT_EQ(true, solution(s));
}

TEST(CASE, 2) {
  std::string s = "(())()";

  EXPECT_EQ(true, solution(s));
}

TEST(CASE, 3) {
  std::string s = ")()(";

  EXPECT_EQ(false, solution(s));
}

TEST(CASE, 4) {
  std::string s = "(()(";

  EXPECT_EQ(false, solution(s));
}
