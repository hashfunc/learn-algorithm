#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto phone_book = std::vector<std::string>{"119", "97674223", "1195524421"};

  EXPECT_EQ(false, solution(phone_book));
}

TEST(CASE, 2) {
  auto phone_book = std::vector<std::string>{"123", "456", "789"};

  EXPECT_EQ(true, solution(phone_book));
}

TEST(CASE, 3) {
  auto phone_book = std::vector<std::string>{"12", "123", "1235", "567", "88"};

  EXPECT_EQ(false, solution(phone_book));
}
