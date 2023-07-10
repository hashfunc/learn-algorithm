#include <algorithm>
#include <unordered_set>
#include <vector>

int solution(int n, std::vector<std::vector<int>> costs)
{
    std::sort(costs.begin(), costs.end(), [](const auto &x, const auto &y) { return x[2] < y[2]; });

    int answer = costs[0][2];
    auto done = std::unordered_set<int>{costs[0][0], costs[0][1]};
    done.reserve(n);

    for (auto count = 0; count < n - 1; ++count)
    {
        for (const auto &cost : costs)
        {
            if (done.find(cost[0]) == done.end() && done.find(cost[1]) != done.end())
            {
                done.insert(cost[0]);
                answer += cost[2];
                break;
            }

            if (done.find(cost[0]) != done.end() && done.find(cost[1]) == done.end())
            {
                done.insert(cost[1]);
                answer += cost[2];
                break;
            }
        }
    }

    return answer;
}
