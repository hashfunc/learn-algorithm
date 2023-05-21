#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto answers = std::vector<int>{1, 2, 3, 4, 5};

  ASSERT_THAT(solution(answers), testing::ElementsAre(1));
}

TEST(CASE, 2) {
  auto answers = std::vector<int>{1, 2, 3, 4, 5};

  ASSERT_THAT(solution(answers), testing::ElementsAre(1, 2, 3));
}
