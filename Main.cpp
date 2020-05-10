#include <Game.h>
#include <Words.h>
#include <challenges/ReversedWord.h>
#include <iostream>

// All challenges
static ReversedWord reversed;

static const std::vector<Challenge*> ALL_CHALLENGES = {&reversed,

                                                       &reversed,

                                                       &reversed};

int main(int argc, char** argv) {

  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " <WordsFile>" << std::endl;
    return 0;
  }

  if (!Words::load_words(argv[1])) {
    std::cout << "Error loading words file" << std::endl;
    return 1;
  }

  Game g(ALL_CHALLENGES);
  g.play();
}