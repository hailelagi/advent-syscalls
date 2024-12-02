cat: cat.c
	gcc cat.c -o cat

run: ./cat
	./cat cat.c Makefile

strace: ./cat
	strace ./cat cat.c Makefile > /dev/null
