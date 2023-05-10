#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto arr = std::vector<int>{1, 1, 3, 3, 0, 1, 1};

  ASSERT_THAT(solution(arr), testing::ElementsAre(1, 3, 0, 1));
}

TEST(CASE, 2) {
  auto arr = std::vector<int>{4, 4, 4, 3, 3};

  ASSERT_THAT(solution(arr), testing::ElementsAre(4, 3));
}
