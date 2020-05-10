#include <Game.h>
#include <Words.h>
#include <challenges/InterweavedLetters.h>
#include <challenges/NextLetter.h>
#include <challenges/NextLetterRandom.h>
#include <challenges/RandomSubsitution.h>
#include <challenges/ReversedWord.h>
#include <challenges/ShiftLeftReverse.h>
#include <challenges/ShiftRight.h>
#include <challenges/SwapHalves.h>
#include <challenges/SwappedFirstLast.h>
#include <challenges/VowelsToSymbols.h>
#include <iostream>

// All challenges
static ReversedWord reversed;
static InterweavedLetters interweavedLetters;
static NextLetter nextLetter;
static NextLetterRandom nextLetterRandom;
static RandomSubsitution randomSubsitution;
static ShiftLeftReverse shiftLeftReverse;
static ShiftRight shiftRight;
static SwapHalves swapHalves;
static SwappedFirstLast swappedFirstLast;
static VowelsToSymbols vowelsToSymbols;

static const std::vector<Challenge*> ALL_CHALLENGES = {
    &swapHalves, &shiftRight,       &shiftLeftReverse, &randomSubsitution,
    &nextLetter, &nextLetterRandom, &vowelsToSymbols,  &swappedFirstLast,
    &shiftRight, &nextLetterRandom, &nextLetter,       &interweavedLetters,
    &reversed,   &reversed};

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