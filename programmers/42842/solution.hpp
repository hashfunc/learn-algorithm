#include <cmath>
#include <stdexcept>
#include <vector>

std::vector<int> solution(int brown, int yellow) {
  const int max_height = static_cast<int>(sqrt(yellow));

  for (auto height = 1; height <= max_height; ++height) {
    if (yellow % height != 0) {
      continue;
    }

    const int width = yellow / height;
    const int expected = (width * 2) + (height * 2) + 4;

    if (expected == brown) {
      return {width + 2, height + 2};
    }
  }

  throw std::invalid_argument("There is no answer");
}
