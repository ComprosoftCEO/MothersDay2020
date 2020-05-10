#ifndef VOWELS_TO_SYMBOLS_HEADER
#define VOWELS_TO_SYMBOLS_HEADER

#include <Challenge.h>

/**
 * @class VowelsToSymbols
 * Convert all vowels (a,e,i,o,u) to symbols
 */
class VowelsToSymbols final: public Challenge {

public:
  std::string get_scrambled_word(const std::string& normal_word) const;
  std::string get_hint() const;
};

#endif /* Vowels to Symbols Header Included */
