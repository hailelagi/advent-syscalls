mmap: mmap.c
	gcc mmap.c -o mmap -static -O3

run: ./mmap
	./mmap

strace: ./mmap
	strace -ff ./mmap 
