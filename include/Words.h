#ifndef WORDS_HEADER
#define WORDS_HEADER

#include <set>
#include <string>

class Words final {

public:
  const std::string& next_word();

  static bool load_words(const std::string& filename = "words.txt");

private:
  std::set<size_t> used;
};

#endif /* Words Header Included */