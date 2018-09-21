CC = gcc

all: main

main: bst.o bstx.o
	$(CC) -shared -Wl,-soname,libbst.so.1.0 -o libbst.so.1.0 bst.o bstx.o

bst.o: bst.c
	$(CC) -c -fPIC bst.c
bstx.o: bstx.c
	$(CC) -c -fPIC bstx.c

link: libbst.so.1.0
	ln libbst.so.1.0 libbst.so
