#ifndef WORDS_HEADER
#define WORDS_HEADER

#include <set>
#include <string>

/**
 * @class Words
 * Class for generating the words to use with the challenges
 */
class Words final {

public:
  const std::string& next_word();

  // Repick word, may randomly repick the same word
  const std::string& repick_word();

  // Load all words from a file
  static bool load_words(const std::string& filename = "words.txt");

private:
  std::set<size_t> used;
  size_t last_word;
};

#endif /* Words Header Included */