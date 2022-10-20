all: main.o listeTableau.o
	gcc -o main main.o listeTableau.o

main.o: main.c
	gcc -c main.c -Wall -ansi -pedantic -o main.o

listeTableau.o: listeTableau.c listeTableau.h
	gcc -c listeTableau.c -Wall -ansi -pedantic -o listeTableau.o
