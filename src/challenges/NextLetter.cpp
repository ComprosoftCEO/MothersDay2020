#include <challenges/NextLetter.h>
#include <helpers.h>

std::string NextLetter::get_scrambled_word(const std::string& normal_word) {
  std::string new_word;
  for (char c: normal_word) { new_word += shift_letter(c, 0); }

  return new_word;
}

std::string NextLetter::get_hint() {
  return "a => b";
}
