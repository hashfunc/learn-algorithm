#include <gtest/gtest.h>

#include "solution.hpp"

TEST(CASE, 1) {
  std::vector<std::vector<std::string>>
      clothes = {{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}};

  EXPECT_EQ(5, solution(clothes));
}

TEST(CASE, 2) {
  std::vector<std::vector<std::string>>
      clothes = {{"crow_mask", "face"}, {"blue_sunglasses", "face"}, {"smoky_makeup", "face"}};

  EXPECT_EQ(3, solution(clothes));
}
