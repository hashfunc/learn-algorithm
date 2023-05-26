#include <algorithm>
#include <unordered_set>
#include <vector>

int go(int k, const std::vector<std::vector<int>> &dungeons, std::unordered_set<int> &checked) {
  int max_count = checked.size();

  for (auto index = 0; index < dungeons.size(); ++index) {
    if (checked.find(index) != checked.end()) {
      continue;
    }

    if (dungeons[index][0] > k) {
      continue;
    }

    checked.insert(index);

    if (k - dungeons[index][1] == 0) {
      return max_count;
    }

    max_count = std::max(max_count, go(k - dungeons[index][1], dungeons, checked));

    checked.erase(index);
  }

  return max_count;
}

int solution(int k, std::vector<std::vector<int>> dungeons) {
  auto checked = std::unordered_set<int>();
  return go(k, dungeons, checked);
}
