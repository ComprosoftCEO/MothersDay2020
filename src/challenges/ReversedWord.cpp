#include <algorithm>
#include <challenges/ReversedWord.h>

std::string ReversedWord::get_scrambled_word(const std::string& normal_word) const {
  std::string new_str(normal_word);
  std::reverse(new_str.begin(), new_str.end());
  return new_str;
}

std::string ReversedWord::get_hint() const {
  return "Try doing a mirror image...";
}
