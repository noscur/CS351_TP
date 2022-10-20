

all: main.o pgcd.o
	gcc -o main main.o pgcd.o

main.o: main.c 
	gcc -c main.c -Wall -ansi -pedantic -o main.o

pgcd.o: pgcd.c pgcd.h
	gcc -c pgcd.c -Wall -ansi -pedantic -o pgcd.o
