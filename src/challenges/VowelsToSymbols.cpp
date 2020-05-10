#include <challenges/VowelsToSymbols.h>
#include <helpers.h>

static const char ALL_VOWELS[] = "aeiou";
static const size_t NUM_VOWELS = sizeof(ALL_VOWELS) - 1;

VowelsToSymbols::VowelsToSymbols(): show_lookup(false) {
  this->reset();
}

std::string VowelsToSymbols::get_scrambled_word(const std::string& normal_word) {
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

std::string VowelsToSymbols::get_hint() {
  if (this->show_lookup) {
    const char random_vowel = ALL_VOWELS[rand() % NUM_VOWELS];
    auto lookup             = this->lookup.find(random_vowel);
    if (lookup != this->lookup.end()) {
      return std::string(1, lookup->second) + " = " + std::string(1, lookup->first);
    }
  }

  this->show_lookup = true;
  return "Which types of letters have been changed?";
}

void VowelsToSymbols::reset() {

  char symbols[]           = ",./?\\|`~!@#$%^&*-_+";
  const size_t num_symbols = sizeof(symbols) - 1;

  shuffle_array(symbols, num_symbols);

  // Build lookup table
  this->lookup.clear();
  for (size_t i = 0; i < NUM_VOWELS; ++i) { this->lookup[ALL_VOWELS[i]] = symbols[i]; }
}
