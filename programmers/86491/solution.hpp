#include <algorithm>
#include <tuple>
#include <vector>

int solution(std::vector<std::vector<int>> sizes)
{
    int max_size[2] = {
        0,
    };

    for (auto &size : sizes)
    {
        std::sort(size.begin(), size.end());

        for (auto index = 0; index < 2; index++)
        {
            max_size[index] = std::max(max_size[index], size[index]);
        }
    }

    return max_size[0] * max_size[1];
}
