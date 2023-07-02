#include <algorithm>
#include <vector>

int solution(std::vector<int> people, int limit)
{
    std::sort(people.rbegin(), people.rend());

    int head = 0;

    for (auto tail = people.size() - 1; head <= tail; ++head)
    {
        if (people[head] + people[tail] <= limit)
        {
            --tail;
        }
    }

    return head;
}
