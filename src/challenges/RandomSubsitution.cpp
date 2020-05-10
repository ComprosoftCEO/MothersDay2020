#include <challenges/RandomSubsitution.h>
#include <cstring>
#include <helpers.h>

RandomSubsitution::RandomSubsitution() {
  this->reset();
}

std::string RandomSubsitution::get_scrambled_word(const std::string& normal_word) {
  std::string new_word;
  for (char c: normal_word) {
    auto search = this->lookup.find(c);
    if (search != this->lookup.end()) {
      new_word += search->second;
    } else {
      new_word += c;
    }
  }

  return new_word;
}

std::string RandomSubsitution::get_hint() {
  do {
    const char letter = random_letter();
    auto lookup       = this->lookup.find(letter);
    if (lookup != this->lookup.end()) {
      return std::string(1, lookup->second) + " => " + std::string(1, lookup->first);
    }

  } while (true);
}

void RandomSubsitution::reset() {
  char letters[NUM_LETTERS];
  memcpy(letters, ALL_LETTERS, NUM_LETTERS);

  shuffle_array(letters, NUM_LETTERS);

  // Build lookup table
  this->lookup.clear();
  for (size_t i = 0; i < NUM_LETTERS; ++i) { this->lookup[ALL_LETTERS[i]] = letters[i]; }
}
