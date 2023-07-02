#include <algorithm>
#include <string>
#include <vector>

std::string solution(std::string s, std::string skip, int index)
{
    std::string characters;

    for (auto character = 'a'; character <= 'z'; ++character)
    {
        if (skip.find(character) == -1)
        {
            characters += character;
        }
    }

    std::string answer;

    for (const auto &character : s)
    {
        answer += characters[(characters.find(character) + index) % characters.length()];
    }

    return answer;
}
