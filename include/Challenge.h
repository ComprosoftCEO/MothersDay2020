#ifndef CHALLENGE_HEADER
#define CHALLENGE_HEADER

#include <string>

/**
 * @class Challenge
 * Generic class for a string decoding challenge
 */
class Challenge {

public:
  virtual ~Challenge() = default;

  // Compute the scrambled word
  virtual std::string get_scrambled_word(const std::string& normal_word) = 0;

  // Display a hint (may be dynamically generated)
  virtual std::string get_hint() = 0;

  virtual void reset();
};

#endif /* Challenge Header Included */