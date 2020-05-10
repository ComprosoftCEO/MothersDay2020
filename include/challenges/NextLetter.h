#ifndef NEXT_LETTER_HEADER
#define NEXT_LETTER_HEADER

#include <Challenge.h>

/**
 * @class NextLetter
 * Convert a->b, b->c, c->d, etc...
 */
class NextLetter final: public Challenge {

public:
  std::string get_scrambled_word(const std::string& normal_word) const;
  std::string get_hint() const;
};

#endif /* Next Letter header Included */
