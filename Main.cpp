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
static ReversedWord reversed_word;
static InterweavedLetters interweaved_letters;
static NextLetter next_letter;
static NextLetterRandom next_letter_random;
static RandomSubsitution random_subsitution;
static ShiftLeftReverse shift_left_reverse;
static ShiftRight shift_right;
static SwapHalves swap_halves;
static SwappedFirstLast swapped_first_last;
static VowelsToSymbols vowels_to_symbols;

static const std::vector<Challenge*> ALL_CHALLENGES = {
    &swapped_first_last, &reversed_word,      &shift_right, &next_letter,
    &shift_left_reverse, &vowels_to_symbols,  &swap_halves, &interweaved_letters,
    &next_letter_random, &random_subsitution,
};

int main(int argc, char** argv) {

  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " <WordsFile>" << std::endl;
    return 0;
  }

  if (!Words::load_words(argv[1])) {
    std::cout << "Error loading words file" << std::endl;
    return 1;
  }

  std::cout << R"(
=========================================================================================
  __  __       _   _               _        ____                 ____   ___ ____   ___  
 |  \/  | ___ | |_| |__   ___ _ __( )___   |  _ \  __ _ _   _   |___ \ / _ \___ \ / _ \`
 | |\/| |/ _ \| __| '_ \ / _ \ '__|// __|  | | | |/ _` | | | |    __) | | | |__) | | | |
 | |  | | (_) | |_| | | |  __/ |    \__ \  | |_| | (_| | |_| |   / __/| |_| / __/| |_| |
 |_|  |_|\___/ \__|_| |_|\___|_|    |___/  |____/ \__,_|\__, |  |_____|\___/_____|\___/ 
                                                        |___/                           
=========================================================================================

It's time for a >NEW< Mother's Day puzzle this year!

You will be given 10 random words, and you must figure out how
to decode the words.

This would be a pretty challenging task, but there are some rules:
  * The solution has the same number of letters as the encrypted word.
  * There is nothing more compilicated than moving letters around 
     or a 1-to-1 subsitution between letters.
  * You can always type "hint" to get extra clues about the puzzle
  * Words are pulled from a massive list of English words. If a word
     is too compilcated to solve, you can type "new" to pick a new 
     word and reset the puzzle parameters.
  * You can always type "help" to show additional commands ("help", "word" "quit")
  
You Ready? Let's Begin!!

)";

  Game g(ALL_CHALLENGES);
  if (!g.play()) { return 0; }

  std::cout << R"(
Dear Player,

I hope that you enjoyed my game! This is where Mom's card
would normally go. However, I removed the card from the
source tree since it is a special message only to my Mom.
I hope you don't feel cheated and still enjoyed a special
Mother's Day with your own family.

Sincerely,
Bryan)" << std::endl;

  return 0;
}
