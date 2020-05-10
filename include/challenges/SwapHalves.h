#ifndef SWAP_HALVES_HEADER
#define SWAP_HALVES_HEADER

#include <Challenge.h>

/**
 * @class SwapHalves
 * Swap the left half and the right half of the word
 */
class SwapHalves final: public Challenge {

public:
  std::string get_scrambled_word(const std::string& normal_word) const;
  std::string get_hint() const;
};

#endif /* Swap Halves Header Included */
