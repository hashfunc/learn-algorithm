#include <algorithm>
#include <unordered_set>
#include <vector>

int solution(std::vector<int> nums) {
    auto set_of_nums = std::unordered_set<int>(nums.begin(), nums.end());

    auto answer = std::min(nums.size() / 2, set_of_nums.size());

    return static_cast<int>(answer);
}
