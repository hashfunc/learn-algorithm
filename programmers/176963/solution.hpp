#include <string>
#include <unordered_map>
#include <vector>

std::vector<int> solution(std::vector<std::string> name, std::vector<int> yearning,
                          std::vector<std::vector<std::string>> photo)
{
    auto score_map = std::unordered_map<std::string, int>();

    for (auto index = 0; index < name.size(); ++index)
    {
        score_map.emplace(name[index], yearning[index]);
    }

    std::vector<int> answer;

    for (const auto &group : photo)
    {
        int score = 0;

        for (const auto &n : group)
        {
            score += score_map[n];
        }

        answer.push_back(score);
    }

    return answer;
}
