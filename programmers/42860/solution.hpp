#include <algorithm>
#include <string>
#include <vector>

int solution(std::string name)
{
    int length = static_cast<int>(name.length());
    int move = length - 1;
    int count = 0;

    for (int index = 0; index < length; index++)
    {
        count += std::min(name[index] - 'A', 'Z' - name[index] + 1);

        int offset = 1;
        for (; index + offset < length; ++offset)
        {
            if (name[index + offset] != 'A')
            {
                break;
            }
        }

        move = std::min(move, index * 2 + length - (index + offset));
        move = std::min(move, (length - (index + offset)) * 2 + index);
    }

    return count + move;
}
