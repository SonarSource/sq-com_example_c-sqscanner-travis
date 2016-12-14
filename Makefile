all:
	mkdir build
	gcc -Wall -O0 -fprofile-arcs -ftest-coverage -o build/counter src/counter.c

test:
	./build/counter 1 2 3
	LC_ALL=en gcov --branch-probabilities --branch-counts src/counter.c -o .

clean:
	rm -rf build
	rm -f *.gcda
	rm -f *.gcno
	rm -f *.gcov
	rm -rf bw-output
