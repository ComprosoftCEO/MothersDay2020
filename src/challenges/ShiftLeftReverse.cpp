#include <algorithm>
#include <challenges/ShiftLeftReverse.h>

std::string ShiftLeftReverse::get_scrambled_word(const std::string& normal_word) {

  // Reverse the string
  std::string reversed(normal_word);
  std::reverse(reversed.begin(), reversed.end());

  // Shift right one letter
  std::string new_word(1, reversed[reversed.length() - 1]);
  for (size_t i = 0; i < reversed.length() - 1; ++i) { new_word += reversed[i]; }

  return new_word;
}

std::string ShiftLeftReverse::get_hint() {
  this->hint_number = (this->hint_number + 1) % 2;

  switch (this->hint_number) {
    case 1:
      return "Start by shifting every letter left...";

    default:
      return "Have you tried then reversing the word?";
  }
}
