#ifndef HELPERS_HEADER
#define HELPERS_HEADER

extern const char ALL_LETTERS[];
extern const size_t NUM_LETTERS;

void shuffle_array(char* array, size_t n);

char random_letter();

// n should be between 0 (shift 1) and 24 (shift 25)
char shift_letter(char input, size_t n);

#endif /* Helpers Header Included */