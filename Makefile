CC = clang++ -std=c++11 -Wall -Werror

all: compile run

compile: *.cc
	$(CC) -O3 -g main.cc veb.cc -lm -o veb

valgrind: compile clean
	valgrind --tool=memcheck --leak-check=yes -v ./veb

run:
	./veb

