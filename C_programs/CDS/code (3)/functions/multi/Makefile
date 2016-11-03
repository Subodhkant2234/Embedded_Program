
all: t.out

t.out:test.o sum.o sqr.o
	gcc test.o sum.o sqr.o -o t.out
test.o:test.c test.h
	gcc test.c -c
sum.o:sum.c test.h
	gcc sum.c -c
sqr.o:sqr.c test.h
	gcc sqr.c -c
clean:
	rm *.o *.out
run:t.out
	./t.out
