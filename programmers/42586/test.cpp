#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto progresses = std::vector<int>{93, 30, 55};
  auto speeds = std::vector<int>{1, 30, 5};

  ASSERT_THAT(solution(progresses, speeds), testing::ElementsAre(2, 1));
}

TEST(CASE, 2) {
  auto progresses = std::vector<int>{95, 90, 99, 99, 80, 99};
  auto speeds = std::vector<int>{1, 1, 1, 1, 1, 1};

  ASSERT_THAT(solution(progresses, speeds), testing::ElementsAre(1, 3, 2));
}
