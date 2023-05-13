#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto prices = std::vector<int>{1, 2, 3, 2, 3};

  ASSERT_THAT(solution(prices), testing::ElementsAre(4, 3, 1, 1, 0));
}
