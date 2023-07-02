#include <string>

bool solution(std::string s)
{
    int count = 0;

    for (const auto &c : s)
    {
        if (c == '(')
        {
            count += 1;
            continue;
        }

        if (count == 0)
        {
            return false;
        }

        count -= 1;
    }

    return count == 0;
}
