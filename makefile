# Makefile for Mother's Day 2020
CC=g++
CFLAGS=-std=c++11 -Iinclude -Wall

PROGRAM=MothersDay2020.out

OBJECTS = \
	Main.o \
	src/Words.o \
	src/Game.o \
	src/challenges/ReversedWord.o \



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
