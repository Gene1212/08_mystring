all: main.o mystring.o
	gcc -o test main.o mystring.o

main.o: main.c mystring.h
	gcc -c main.c

mystring.o: mystring.h mystring.c
	gcc -c mystring.c