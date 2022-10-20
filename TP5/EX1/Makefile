all: main.o Fraction.o
	gcc -o main main.o Fraction.o

main.o: main.c
	gcc -c main.c -Wall -ansi -pedantic -o main.o

Fraction.o: Fraction.c Fraction.h
	gcc -c Fraction.c -Wall -ansi -pedantic -o Fraction.o
