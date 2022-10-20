all: main.o pile.o
	gcc -o main main.o pile.o

main.o: main.c
	gcc -g -c main.c -Wall -ansi -pedantic -o main.o

pile.o: pile.c pile.h
	gcc -g -c pile.c -Wall -ansi -pedantic -o pile.o
