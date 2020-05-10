#include <challenges/NextLetterRandom.h>
#include <cstdlib>
#include <helpers.h>

NextLetterRandom::NextLetterRandom(): n(rand() % (NUM_LETTERS - 1)), show_hint(false) {}

std::string NextLetterRandom::get_scrambled_word(const std::string& normal_word) {
  std::string new_word;
  for (char c: normal_word) { new_word += shift_letter(c, this->n); }

  return new_word;
}

std::string NextLetterRandom::get_hint() {

  if (this->show_hint) {
    const char l = random_letter();
    return std::string(1, l) + " => " + std::string(1, shift_letter(l, this->n));
  };

  this->show_hint = true;
  return "a => ??? (Unspecified Number...)";
}

void NextLetterRandom::reset() {
  this->n = rand() % (NUM_LETTERS - 1);
}