#ifndef VOWELS_TO_SYMBOLS_HEADER
#define VOWELS_TO_SYMBOLS_HEADER

#include <Challenge.h>
#include <map>

/**
 * @class VowelsToSymbols
 * Convert all vowels (a,e,i,o,u) to symbols
 */
class VowelsToSymbols final: public Challenge {

public:
  VowelsToSymbols();

  std::string get_scrambled_word(const std::string& normal_word);
  std::string get_hint();

  void reset();

private:
  std::map<char, char> lookup;
  bool show_lookup;
};

#endif /* Vowels to Symbols Header Included */
