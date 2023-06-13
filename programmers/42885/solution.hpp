#include <map>
#include <vector>

int solution(std::vector<int> people, int limit) {
  auto weight_map = std::map<int, int>();

  for (auto weight : people) {
    if (weight_map.find(weight) == weight_map.end()) {
      weight_map.insert({weight, 1});
    } else {
      weight_map[weight] += 1;
    }
  }

  int answer = 0;

  for (auto r_iter = weight_map.rbegin(); r_iter != weight_map.rend(); ++r_iter) {
    auto &[r_key, r_value] = *r_iter;

    while (r_value > 0) {
      --r_value;

      int weight = r_key;

      for (auto iter = weight_map.begin(); iter->first <= r_iter->first; ++iter) {
        auto &[key, value] = *iter;

        if (value == 0) {
          continue;
        }

        if (weight + key <= limit) {
          --value;
          weight += key;
        } else {
          break;
        }
      }

      ++answer;
    }
  }

  return answer;
}
