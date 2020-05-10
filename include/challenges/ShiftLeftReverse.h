#ifndef SHIFT_LEFT_REVERSE_HEADER
#define SHIFT_LEFT_REVERSE_HEADER

#include <Challenge.h>

/**
 * @class ShiftLeftReverse
 * Shift left and then reverse all letters in the word
 */
class ShiftLeftReverse final: public Challenge {

public:
  std::string get_scrambled_word(const std::string& normal_word) const;
  std::string get_hint() const;
};

#endif /* Shift Left Reverse Header Included */
