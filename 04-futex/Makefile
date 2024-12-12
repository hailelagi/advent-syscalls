futex: futex.c
	gcc futex.c -o futex -Wall

run: ./futex
	./futex

strace: ./futex
	strace -ff ./futex thread

clean:
	rm -f ./futex
