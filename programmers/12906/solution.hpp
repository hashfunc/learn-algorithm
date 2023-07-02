#include <vector>

std::vector<int> solution(std::vector<int> arr)
{
    std::vector<int> answer = {arr[0]};

    for (const int &num : arr)
    {
        if (answer.back() != num)
        {
            answer.push_back(num);
        }
    }

    return answer;
}
