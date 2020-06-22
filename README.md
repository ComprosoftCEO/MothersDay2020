# Mother's Day 2020 Card

Cracking the Secret Codes

<br />

## About

Every year, I like to program cards for my family for special events, including:

* Birthdays
* Father's Day
* Mother's Day
* _etc._

I don't normally post the cards I program, but I was really proud of Mom's code breaking
challenge this year, so I wanted to go ahead and post the source code. I hope that you can
also enjoy playing it! I've removed any personal family references from the code.

<br />

## Compiling the Code

To compile the code, you need to have the [GNU Readline Library](https://tiswww.case.edu/php/chet/readline/rltop.html)
installed on your system.

__Ubuntu:__
```
sudo apt install libreadline-dev
```

__Fedora:__
```
sudo yum install readline-devel
```

__Windows:__

There is also a [Windows version](http://gnuwin32.sourceforge.net/packages/readline.htm), but it is
a bit trickier to install and configure the shared library and header files.

<br />

You will also need a `C++11` compiler and [GNU Make](https://www.gnu.org/software/make/).
To compile the code, simply run:

```
make
```

To rebuild the code, type:
```
make clean
make
```

This will produce `MothersDay2020.out` for the executable.

<br />

## Running the Code

```
./MothersDay2020.out <WordsFile>
```

The game requires a text file of English words to use with the code algorithms.
The program loads all words that are at least 10 letters long and only contain
lowercase letters (so no capital letters, dashes, commas, apostrophies, etc.).
The text file I used is [words.txt](https://github.com/dwyl/english-words/blob/master/words.txt)
from the GitHub repository [english-words](https://github.com/dwyl/english-words).
However, you can use other dictionaries as well.

<br />

## Game Commands

All Commands:
* __help__ = Help screen
* __word__ = Reshow the scrambled word
* __hint__ = Ask a hint for the problem
* __new__  = Pick a new word and reset the problem
* __quit__ = Exit the program
* __&lt;solution&gt;__ = Solve the problem

Undocumented Commands:
* __cheat__ = Used for debugging to show the solution

<br />

## All Level Solutions

<details>
  <summary>Level 1</summary>
  First letter and last letter swapped
</details>

<details>
  <summary>Level 2</summary>
  Word Reversed
</details>

<details>
  <summary>Level 3</summary>
  Shifted right 1 letter
</details>

<details>
  <summary>Level 4</summary>
  Every letter becomes next letter (a-&gt;b, b-&gt;c, etc.)
</details>

<details>
  <summary>Level 5</summary>
  Shifted left 1 letter and reversed
</details>

<details>
  <summary>Level 6</summary>
  Vowels converted to symbols
</details>

<details>
  <summary>Level 7</summary>
  First half and second half swapped
</details>

<details>
  <summary>Level 8</summary>
  Interweaved letters, indicated by capital letters
</details>

<details>
  <summary>Level 9</summary>
  Every letter increased by a random amount (a-&gt;a+n)
</details>

<details>
  <summary>Level 10</summary>
  Random letter subsitution
</details>

<br />

## Code Linters

The source code uses [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) and [Clang-Tidy](https://clang.llvm.org/extra/clang-tidy/)
to format the code and maintain a consistant style. You can either run these programs manually or install a plugin
into your favorite code editor.
