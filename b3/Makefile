all: main

main: libfunc.a
	gcc -o myprog myprog.c libfunc.a

libfunc.a: factor.o combine.o sum.o sum_p.o
	ar rcs libfunc.a factor.o combine.o sum.o sum_p.o
factor.o: factor.c
	gcc -c factor.c	
combine.o: combine.c
	gcc -c combine.c
sum.o: sum.c
	gcc -c sum.c
sum_p.o: sum_p.c
	gcc -c sum_p.c

clean:
	rm *~
	rm *.o
