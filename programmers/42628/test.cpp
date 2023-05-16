#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto operations = std::vector<std::string>{"I 16", "I -5643", "D -1", "D 1", "D 1", "I 123", "D -1"};

  ASSERT_THAT(solution(operations), testing::ElementsAre(0, 0));
}

TEST(CASE, 2) {
  auto operations = std::vector<std::string>{"I -45", "I 653", "D 1", "I -642", "I 45", "I 97", "D 1", "D -1", "I 333"};

  ASSERT_THAT(solution(operations), testing::ElementsAre(333, -45));
}
