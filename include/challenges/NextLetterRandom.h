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

  std::string get_scrambled_word(const std::string& normal_word) const;
  std::string get_hint() const;

private:
  size_t n;
  size_t hint_number;
};

#endif /* Next Letter header Included */
