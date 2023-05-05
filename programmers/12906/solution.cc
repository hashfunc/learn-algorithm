#include "solution.h"

std::vector<int> solution(const std::vector<int> &arr) {
    std::vector<int> answer = {arr[0]};

    for (const int &num: arr) {
        if (answer.back() != num) {
            answer.push_back(num);
        }
    }

    return answer;
}
