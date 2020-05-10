#include <Words.h>
#include <cctype>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>

static std::vector<std::string> ALL_WORDS;

static inline bool valid_word(const std::string& word);

//
// Load the file into memory
//
bool Words::load_words(const std::string& filename) {
  std::fstream words_file(filename);
  if (words_file.is_open()) {
    std::string line;
    while (getline(words_file, line)) {
      if (valid_word(line)) { ALL_WORDS.push_back(line); }
    }
    words_file.close();

    return true;

  } else {
    return false;
  }
}

static inline bool valid_word(const std::string& word) {
  if (word.length() < 10) { return false; }

  for (char c: word) {
    if (!islower(c)) { return false; }
  }

  return true;
}

//
// Get the next word
//
const std::string& Words::next_word() {

  // Reseed the random number generator
  srand(time(NULL));

  // Edge case: no more words (Should NEVER happen)
  if (this->used.size() == ALL_WORDS.size()) { throw "All words used!"; }

  // Get the next index
  size_t word_index;
  do {
    word_index = ((size_t) rand()) % ALL_WORDS.size();
  } while (this->used.find(word_index) != this->used.end());

  // Don't reuse any words
  this->used.insert(word_index);
  this->last_word = word_index;

  return ALL_WORDS[word_index];
}

const std::string& Words::repick_word() {
  this->used.erase(this->last_word);
  return this->next_word();
}
