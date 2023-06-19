#include <string>

int solution(std::string t, std::string p) {
  int answer = 0;

  for (auto index = 0; index < t.size() - p.size() + 1; ++index) {
    for (auto offset = 0; offset < p.size(); ++offset) {
      if (t[index + offset] > p[offset]) {
        break;
      }

      if (t[index + offset] < p[offset] || offset == p.size() - 1) {
        ++answer;
        break;
      }
    }
  }

  return answer;
}
