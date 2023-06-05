#include <string>
#include <unordered_set>
#include <vector>

bool solution(std::vector<std::string> phone_book) {
  auto phone_book_set =
      std::unordered_set<std::string>(phone_book.begin(), phone_book.end());

  for (const auto &phone : phone_book) {
    auto phone_length = phone.length();

    for (int offset = 1; offset < phone_length; offset++) {
      auto iter = phone_book_set.find(phone.substr(0, phone_length - offset));
      if (iter != phone_book_set.end()) {
        return false;
      }
    }
  }

  return true;
}
