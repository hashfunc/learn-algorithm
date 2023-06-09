#include <string>
#include <unordered_map>
#include <vector>

std::string solution(std::vector<std::string> participant, const std::vector<std::string> completion)
{
    auto completion_map = std::unordered_map<std::string, int>();

    for (const auto &key : completion)
    {
        completion_map[key] += 1;
    }

    for (const auto &key : participant)
    {
        auto iter = completion_map.find(key);
        if (iter == completion_map.end() || iter->second == 0)
        {
            return key;
        }
        completion_map[key] -= 1;
    }

    throw std::invalid_argument("There is no answer");
}
