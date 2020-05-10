# Makefile for Mother's Day 2020
CC=g++
CFLAGS=-std=c++11 -Iinclude -Wall -lreadline

PROGRAM=MothersDay2020.out

OBJECTS = \
	Main.o \



all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) $^ -o $@

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
