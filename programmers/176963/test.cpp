#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "solution.hpp"

#define NAME 176963

class TestParameters
    : public ::testing::TestWithParam<std::tuple<std::vector<std::string>, std::vector<int>,
                                                 std::vector<std::vector<std::string>>, std::vector<int>>>
{
};

TEST_P(TestParameters, NAME)
{
    const auto &[name, yearning, photo, result] = GetParam();

    ASSERT_THAT(solution(name, yearning, photo), testing::ElementsAreArray(result));
}

INSTANTIATE_TEST_SUITE_P(
    NAME, TestParameters,
    ::testing::Values(
        std::make_tuple(std::vector<std::string>{"may", "kein", "kain", "radi"}, std::vector<int>{5, 10, 1, 3},
                        std::vector<std::vector<std::string>>{{"may", "kein", "kain", "radi"},
                                                              {"may", "kein", "brin", "deny"},
                                                              {"kon", "kain", "may", "coni"}},
                        std::vector<int>{19, 15, 6}),
        make_tuple(std::vector<std::string>{"kali", "mari", "don"}, std::vector<int>{11, 1, 55},
                   std::vector<std::vector<std::string>>{
                       {"kali", "mari", "don"}, {"pony", "tom", "teddy"}, {"con", "mona", "don"}},
                   std::vector<int>{67, 0, 55}),
        make_tuple(std::vector<std::string>{"may", "kein", "kain", "radi"}, std::vector<int>{5, 10, 1, 3},
                   std::vector<std::vector<std::string>>{{"may"}, {"kein", "deny", "may"}, {"kon", "coni"}},
                   std::vector<int>{5, 15, 0})));
