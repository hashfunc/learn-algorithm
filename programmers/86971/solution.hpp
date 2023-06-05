#include <queue>
#include <unordered_set>
#include <vector>

int solution(int n, std::vector<std::vector<int>> wires) {
  int answer = n;

  for (auto excluded = 0; excluded < wires.size(); ++excluded) {
    auto queue = std::queue<int>();
    auto checked = std::unordered_set<int>();

    queue.push(1);

    do {
      auto location = queue.front();
      queue.pop();

      checked.insert(location);

      for (auto index = 0; index < wires.size(); ++index) {
        if (index == excluded) {
          continue;
        }

        if (wires[index][0] == location &&
            checked.find(wires[index][1]) == checked.end()) {
          queue.push(wires[index][1]);
        } else if (wires[index][1] == location &&
                   checked.find(wires[index][0]) == checked.end()) {
          queue.push(wires[index][0]);
        }
      }
    } while (!queue.empty());

    const int count = static_cast<int>(checked.size());
    answer = std::min<int>(answer, std::abs(count - std::abs(n - count)));
  }

  return answer;
}
