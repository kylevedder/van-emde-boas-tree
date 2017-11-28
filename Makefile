CC = clang++ -std=c++11 -Wall -Werror

all: compile clean run

compile: *.cc
	$(CC) -fprofile-arcs -ftest-coverage -g main.cc veb.cc -lm -o veb

valgrind: compile clean
	valgrind --tool=memcheck --leak-check=yes -v ./veb

coverage: veb.gcda
	gcov veb.gcda

run:
	./veb

clean: *.o
	rm *.o *.gc*
