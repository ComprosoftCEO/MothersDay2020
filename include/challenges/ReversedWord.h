#ifndef REVERSED_WORD_HEADER
#define REVERSED_WORD_HEADER

#include <Challenge.h>

/**
 * @class ReversedWord
 * Reverse all letters in the word
 */
class ReversedWord final: public Challenge {

public:
  std::string get_scrambled_word(const std::string& normal_word);
  std::string get_hint();
};

#endif /* Reversed Word Header Included */
