clone: clone.c
	gcc clone.c -o clone

run: ./clone
	./clone thread

strace: ./clone
	strace -ff ./clone thread
