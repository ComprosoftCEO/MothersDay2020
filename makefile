# Makefile for Mother's Day 2020
CC=g++
CFLAGS=-std=c++11 -Iinclude -Wall

PROGRAM=MothersDay2020.out

OBJECTS = \
	Main.o \
	src/Words.o \
	src/Challenge.o \
	src/Game.o \
	src/helpers.o \
	src/challenges/ReversedWord.o \
	src/challenges/InterweavedLetters.o \
	src/challenges/NextLetter.o \
	src/challenges/NextLetterRandom.o \
	src/challenges/RandomSubsitution.o \
	src/challenges/ShiftLeftReverse.o \
	src/challenges/ShiftRight.o \
	src/challenges/SwapHalves.o \
	src/challenges/SwappedFirstLast.o \
	src/challenges/VowelsToSymbols.o \



all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) $^ -lreadline -lhistory -o $@

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@


# Run the file
.PHONY: run
run: $(PROGRAM)
	./$(PROGRAM)

# Remove all files
.PHONY: clean
clean:
	rm -f $(PROGRAM) $(OBJECTS)
