#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto array = std::vector<int>{1, 5, 2, 6, 3, 7, 4};
  auto commands = std::vector<std::vector<int>>{{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};

  ASSERT_THAT(solution(array, commands), testing::ElementsAre(5, 6, 3));
}
