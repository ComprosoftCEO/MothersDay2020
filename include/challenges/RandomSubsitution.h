#ifndef RANDOM_SUBSITUTION_HEADER
#define RANDOM_SUBSITUTION_HEADER

#include <Challenge.h>
#include <map>

/**
 * @class RandomSubsitution
 * Randomly subsitute one letter for another
 */
class RandomSubsitution final: public Challenge {

public:
  RandomSubsitution();

  std::string get_scrambled_word(const std::string& normal_word);
  std::string get_hint();

  void reset();

private:
  std::map<char, char> lookup;
};

#endif /* Random Subsitution Header Included */
