#include <Game.h>
#include <iostream>
#include <readline/history.h>
#include <readline/readline.h>

static void show_help();
static bool confirm(const std::string& message);

// Trim string
static std::string ltrim(const std::string& s);
static std::string rtrim(const std::string& s);
static std::string trim(const std::string& s);

//
// Constructor
//
Game::Game(const std::vector<Challenge*>& all_challenges): all_challenges(all_challenges) {}

//
// Main entry point
//
bool Game::play() {

  // Configure Readline
  rl_prep_terminal(0);       // No meta flags
  rl_inhibit_completion = 1; // No tab completion

  size_t level = 1;
  for (auto challenge: this->all_challenges) {
    std::cout << "Level " << level++ << ":" << std::endl;
    if (!this->play_round(challenge)) { return false; }
  }

  return true; /* All levels complete */
}

//
// Play a single round
//
bool Game::play_round(Challenge* challenge) {

  std::string word = this->my_words.next_word();

top:
  challenge->reset();
  std::cout << "Word to decode: " << challenge->get_scrambled_word(word) << std::endl << std::endl;
  std::string prev_line;

  while (true) {
    const char* next_line = readline("> ");
    if (next_line == NULL) { continue; }

    const std::string line(trim(next_line));
    if (line.length() == 0) { continue; }

    if (line != prev_line) {
      add_history(line.c_str());
      prev_line = line;
    }

    if (line == "help") {
      show_help();
      continue;
    }
    if (line == "word") {
      std::cout << "Word to decode: " << challenge->get_scrambled_word(word) << std::endl;
      continue;
    }
    if (line == "hint") {
      std::cout << challenge->get_hint() << std::endl;
      continue;
    }
    if (line == "new") {
      if (confirm("Reset Puzzle?")) {
        word = this->my_words.repick_word();
        std::cout << std::endl;
        goto top;
      }
      continue;
    }
    if (line == "cheat") {
      std::cout << word << std::endl;
      continue;
    }
    if (line == "quit") {
      if (confirm("Really Quit?")) { return false; }
      continue;
    }
    if (line == word) {
      std::cout << "Correct!" << std::endl << std::endl;
      return true;
    }

    std::cout << "Incorrect! '" << line << "' is not the answer!" << std::endl;
  }
}

static void show_help() {
  std::cout << "All Commands:" << std::endl;
  std::cout << "  help = Help screen" << std::endl;
  std::cout << "  word = Reshow the scrambled word" << std::endl;
  std::cout << "  hint = Ask a hint for the problem" << std::endl;
  std::cout << "  new  = Pick a new word and reset the problem" << std::endl;
  std::cout << "  quit = Exit the program" << std::endl << std::endl;
  std::cout << "  <solution> = Solve the problem" << std::endl;
}

static bool confirm(const std::string& message) {

  const std::string prompt = message + " [Y|N] ";
  while (true) {

    const char* next_line = readline(prompt.c_str());
    if (next_line == NULL) { continue; }

    const std::string line(trim(next_line));
    if (line.length() == 0) { continue; }

    if (line == "y" || line == "Y") { return true; }
    if (line == "n" || line == "N") { return false; }
  }
}

//
// Trim Whitespace
//
const std::string WHITESPACE = " \n\r\t\f\v";

static std::string ltrim(const std::string& s) {
  size_t start = s.find_first_not_of(WHITESPACE);
  return (start == std::string::npos) ? "" : s.substr(start);
}

static std::string rtrim(const std::string& s) {
  size_t end = s.find_last_not_of(WHITESPACE);
  return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

static std::string trim(const std::string& s) {
  return rtrim(ltrim(s));
}
