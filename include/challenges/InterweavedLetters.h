#ifndef INTERWEAVED_LETTERS_HEADER
#define INTERWEAVED_LETTERS_HEADER

#include <Challenge.h>

/**
 * @class InterweavedLetters
 * Do every other letter interweaved, indicated by capital lettes
 */
class InterweavedLetters final: public Challenge {

public:
  std::string get_scrambled_word(const std::string& normal_word) const;
  std::string get_hint() const;
};

#endif /* Interweaved Letters header Included */
