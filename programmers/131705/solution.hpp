#include <string>
#include <unordered_set>
#include <vector>

int solution(std::vector<int> number) {
  const auto length = number.size();

  int answer = 0;

  for (int first_index = 0; first_index < length; ++first_index) {
    for (int second_index = first_index + 1; second_index < length; ++second_index) {
      for (int third_index = second_index + 1; third_index < length; ++third_index) {
        if (number[first_index] + number[second_index] + number[third_index] == 0) {
          ++answer;
        }
      }
    }
  }

  return answer;
}
