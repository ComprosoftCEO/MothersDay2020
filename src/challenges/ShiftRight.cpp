#include <challenges/ShiftRight.h>

std::string ShiftRight::get_scrambled_word(const std::string& normal_word) {

  // Shift everything left one letter
  std::string new_word;
  for (size_t i = 1; i < normal_word.length(); ++i) { new_word += normal_word[i]; }
  new_word += normal_word[0];

  return new_word;
}

std::string ShiftRight::get_hint() {

  return "Every letter is >>";
}
