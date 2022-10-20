
# 1er Makefile


all: main.o graphlib.o dessine.o
	gcc -o main main.o graphlib.o dessine.o -lX11 -L/usr/include/X11

main.o: main.c graphlib.h dessine.h
	gcc -c main.c -Wall -ansi -pedantic -o main.o

graphlib.o: graphlib.c
	gcc -c graphlib.c -Wall -ansi -pedantic -o graphlib.o 

dessine.o:	dessine.c graphlib.h
	gcc -c dessine.c -Wall -ansi -pedantic -o dessine.o graphlib.o