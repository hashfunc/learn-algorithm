#include <algorithm>
#include <cmath>
#include <vector>

int solution(std::vector<std::vector<int>> routes)
{
    std::sort(routes.begin(), routes.end(), [](const auto &x, const auto &y) { return x[0] < y[0]; });

    auto boundaries = std::vector<std::pair<int, int>>{};

    for (const auto &route : routes)
    {
        bool is_new_boundary = true;

        for (auto &boundary : boundaries)
        {
            if ((route[0] <= boundary.second && route[1] >= boundary.first) ||
                (route[1] >= boundary.first && route[0] <= boundary.second))
            {
                boundary.first = std::max(boundary.first, route[0]);
                boundary.second = std::min(boundary.second, route[1]);
                is_new_boundary = false;
                break;
            }
        }

        if (is_new_boundary)
        {
            boundaries.emplace_back(route[0], route[1]);
        }
    }

    return static_cast<int>(boundaries.size());
}
