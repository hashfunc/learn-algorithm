#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> players,
                                  std::vector<std::string> callings) {
  auto ranking = std::unordered_map<std::string, int>();

  for (auto index = 0; index < players.size(); ++index) {
    ranking.emplace(players[index], index);
  }

  for (const auto &name : callings) {
    const auto index = ranking[name];

    ranking[players[index]] -= 1;
    ranking[players[index - 1]] += 1;

    std::swap(players[index], players[index - 1]);
  }

  return players;
}
