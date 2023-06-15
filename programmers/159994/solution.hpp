#include <string>
#include <vector>

std::string solution(std::vector<std::string> cards1,
                     std::vector<std::string> cards2,
                     std::vector<std::string> goal) {

  int index1 = 0, index2 = 0;

  for (const auto &word : goal) {
    if (index1 < cards1.size() && cards1[index1] == word) {
      ++index1;
      continue;
    }

    if (index2 < cards2.size() && cards2[index2] == word) {
      ++index2;
      continue;
    }

    return "No";
  }

  return "Yes";
}
