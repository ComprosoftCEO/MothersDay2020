#ifndef NEXT_LETTER_RANDOM_HEADER
#define NEXT_LETTER_RANDOM_HEADER

#include <Challenge.h>

/**
 * @class NextLetterRandom
 * Convert a->(a+n) % 26 for a randomly picked N value
 */
class NextLetterRandom final: public Challenge {

public:
  NextLetterRandom();

  std::string get_scrambled_word(const std::string& normal_word);
  std::string get_hint();

  void reset();

private:
  size_t n;
  bool show_hint;
};

#endif /* Next Letter header Included */
