#ifndef SHIFT_RIGHT_HEADER
#define SHIFT_RIGHT_HEADER

#include <Challenge.h>

/**
 * @class ShiftRight
 * Shift all letters right one position
 */
class ShiftRight final: public Challenge {

public:
  std::string get_scrambled_word(const std::string& normal_word);
  std::string get_hint();
};

#endif /* Shift Right Header Included */
