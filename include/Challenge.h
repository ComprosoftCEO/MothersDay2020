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
  virtual std::string get_scrambled_word(const std::string& normal_word) const = 0;

  // Display a hint (may be dynamically generated)
  virtual std::string get_hint() const = 0;
};

#endif /* Challenge Header Included */