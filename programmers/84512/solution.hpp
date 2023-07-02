#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

const std::string characters = "AEIOU";
const auto size = static_cast<int>(5 + std::pow(5, 2) + std::pow(5, 3) + std::pow(5, 4) + std::pow(5, 5));

int solution(std::string word)
{
    auto dictionary = std::vector<std::string>{"A", "E", "I", "O", "U"};
    dictionary.reserve(size);

    for (int loop = 0, index = 0; loop < 4; ++loop)
    {
        const auto count_of_words = dictionary.size();

        for (; index < count_of_words; ++index)
        {
            auto base = dictionary[index];

            for (const auto &character : characters)
            {
                dictionary.push_back(base + character);
            }
        }
    }

    std::sort(dictionary.begin(), dictionary.end());

    return std::find(dictionary.begin(), dictionary.end(), word) - dictionary.begin() + 1;
}
