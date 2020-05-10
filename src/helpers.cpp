#include <algorithm>
#include <chrono> // std::chrono::system_clock
#include <cstdlib>
#include <helpers.h>
#include <random> // std::default_random_engine

const char ALL_LETTERS[]        = "abcdefghijklmnopqrstuvwxyz";
extern const size_t NUM_LETTERS = sizeof(ALL_LETTERS) - 1;

void shuffle_array(char* array, size_t n) {
  // Shuffling our array
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::shuffle(array, array + n, std::default_random_engine(seed));
}

char random_letter() {
  return ALL_LETTERS[rand() % NUM_LETTERS];
}

char shift_letter(char c, size_t n) {
  if (c <= (char) ('a' + n)) {
    return (c - (n + 1)) + 26;
  } else {
    return (c - (n + 1));
  }
}