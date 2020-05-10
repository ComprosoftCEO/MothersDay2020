#include <Words.h>
#include <iostream>

int main(int argc, char** argv) {

  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " <WordsFile>" << std::endl;
    return 0;
  }

  if (!Words::load_words(argv[1])) {
    std::cout << "Error loading words file" << std::endl;
    return 1;
  }

  Words w;

  for (int i = 0; i < 5; ++i) { std::cout << w.next_word() << std::endl; }

  return 0;
}