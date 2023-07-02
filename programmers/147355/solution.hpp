#include <string>

int solution(std::string t, std::string p)
{
    int answer = 0;

    auto view = std::string_view(t);

    for (auto index = 0; index < t.size() - p.size() + 1; ++index)
    {
        if (view.substr(index, p.size()).compare(p) <= 0)
        {
            ++answer;
        }
    }

    return answer;
}
