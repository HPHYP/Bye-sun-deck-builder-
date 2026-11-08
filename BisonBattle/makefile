# ---------- Settings ----------
CC = g++
FLAGS = -Wall -std=c++17

# ---------- Shortcuts ----------
# Typing just "make" builds the tests (the FIRST target is the default)
all: TESTS/test

# "make runTest" builds the tests if needed, then runs them
runTest: TESTS/test
	./TESTS/test

# ---------- The test program ----------
TESTS/test: obj/test.o obj/catch_amalgamated.o | obj
	$(CC) $^ -o $@

obj/test.o: TESTS/test.cpp Pile.h TESTS/catch_amalgamated.hpp | obj
	$(CC) $(FLAGS) -c $< -o $@

# Catch2 itself: slow to compile, but only rebuilds if its files change
obj/catch_amalgamated.o: TESTS/catch_amalgamated.cpp TESTS/catch_amalgamated.hpp | obj
	$(CC) $(FLAGS) -c $< -o $@

# ---------- Folder for the .o files ----------
obj:
	mkdir -p obj

# ---------- Cleanup ----------
# Deletes your compiled files, but keeps catch_amalgamated.o (slow to rebuild)
clean:
	rm -f obj/test.o TESTS/test