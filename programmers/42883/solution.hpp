#include <string>

std::string solution(std::string number, int k) {
  std::string answer;
  answer.reserve(number.size() - k);

  for (auto &n: number) {
	while (k > 0 && !answer.empty() && answer.back() < n) {
	  answer.pop_back();
	  --k;
	}

	answer.push_back(n);
  }

  for (; k > 0; --k) {
	answer.pop_back();
  }

  return answer;
}
