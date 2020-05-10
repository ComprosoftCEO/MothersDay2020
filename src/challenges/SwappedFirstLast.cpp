#include <challenges/SwappedFirstLast.h>

std::string SwappedFirstLast::get_scrambled_word(const std::string& normal_word) {
  std::string new_word(1, normal_word[normal_word.length() - 1]);
  new_word += normal_word.substr(1, normal_word.length() - 2);
  new_word += normal_word[0];
  return new_word;
}

std::string SwappedFirstLast::get_hint() {
  return "First and last letter...";
}
