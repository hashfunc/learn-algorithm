#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "solution.hpp"

TEST(CASE, 1) {
  auto genres = std::vector<std::string>{"classic", "pop", "classic", "classic", "pop"};
  auto players = std::vector<int>{500, 600, 150, 800, 2500};

  ASSERT_THAT(solution(genres, players), testing::ElementsAre(4, 1, 3, 0));
}
