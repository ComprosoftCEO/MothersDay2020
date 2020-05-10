#include <cctype>
#include <challenges/InterweavedLetters.h>
#include <cmath>

std::string InterweavedLetters::get_scrambled_word(const std::string& normal_word) {
  std::string new_word;

  const size_t middle = (normal_word.length() / 2) + (normal_word.length() % 2); // Roof
  for (size_t i = 0, j = middle; i < middle; i += 1, j += 1) {
    new_word += tolower(normal_word[i]);
    if (j < normal_word.length()) { new_word += toupper(normal_word[j]); }
  }

  return new_word;
}

std::string InterweavedLetters::get_hint() {
  return "Try building from every other letter...";
}
