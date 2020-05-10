#include <algorithm>
#include <cctype>
#include <challenges/SwapHalves.h>

std::string SwapHalves::get_scrambled_word(const std::string& normal_word) {
  std::string first  = normal_word.substr(0, normal_word.length() / 2);
  std::string second = normal_word.substr(normal_word.length() / 2);

  std::transform(first.begin(), first.end(), first.begin(), toupper);
  std::transform(second.begin(), second.end(), second.begin(), tolower);

  return second + first;
}

std::string SwapHalves::get_hint() {
  return "Try swapping CAPITAL and lowercase...";
};
