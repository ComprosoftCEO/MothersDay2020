#ifndef SWAPPED_FIRST_LAST_HEADER
#define SWAPPED_FIRST_LAST_HEADER

#include <Challenge.h>

/**
 * @class SwappedFirstLast
 * Swap the first and last letters in a word
 */
class SwappedFirstLast final: public Challenge {

public:
  std::string get_scrambled_word(const std::string& normal_word);
  std::string get_hint();
};

#endif /* Swapped First Last Header Included */