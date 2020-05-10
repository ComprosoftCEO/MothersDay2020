#ifndef GAME_HEADER
#define GAME_HEADER

#include <Challenge.h>
#include <Words.h>
#include <vector>

/**
 * @class Game
 * Actualy play the game using a set of challenges
 */
class Game final {

public:
  Game(const std::vector<Challenge*>& all_challenges);

  bool play();

private:
  bool play_round(Challenge* challenge);

private:
  Words my_words;
  std::vector<Challenge*> all_challenges;
};

#endif /* Game Header Included */