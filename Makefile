CC = clang++ -std=c++11 -Wall -Werror

all: compile run

compile: *.cc
	$(CC) main.cc veb.cc veb_queue.cc -g -o veb

valgrind: compile
	valgrind --tool=memcheck --leak-check=yes -v ./veb

run:
	./veb

