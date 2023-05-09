#include <gtest/gtest.h>

#include "solution.h"

TEST(CASE, 1) {
    auto participant = std::vector<std::string>{"leo", "kiki", "eden"};
    auto completion = std::vector<std::string>{"eden", "kiki"};

    EXPECT_EQ("leo", solution(participant, completion));
}

TEST(CASE, 2) {
    auto participant = std::vector<std::string>{"marina", "josipa", "nikola", "vinko", "filipa"};
    auto completion = std::vector<std::string>{"josipa", "filipa", "marina", "nikola"};

    EXPECT_EQ("vinko", solution(participant, completion));
}

TEST(CASE, 3) {
    auto participant = std::vector<std::string>{"mislav", "stanko", "mislav", "ana"};
    auto completion = std::vector<std::string>{"stanko", "ana", "mislav"};

    EXPECT_EQ("mislav", solution(participant, completion));
}
