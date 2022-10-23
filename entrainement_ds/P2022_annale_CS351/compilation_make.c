/*

1)

Fichier makefile à corriger
all: foobar.o main.o
     gcc    main foobar.o main.o

foobar.o: foobar.c foobar.h
     gcc    foobar.c -Wall -ansi -pedantic foobar.o


main.o: main.c
     gcc main.c -Wall -ansi -pedantic main.o


Fichier makefile corrigé

all: main.o foobar.o
     gcc    -o main main.o foobar.o // Option -o pour preciser le fichier de sortie

foobar.o: foobar.c foobar.h
     gcc    -c foobar.c -Wall -ansi -pedantic -o foobar.o   // Option -c pour ne pas realiser d'edition de liens et -o pour preciser le fichier de sortie

main.o: main.c
     gcc    -c main.c -Wall -ansi -pedantic -o main.o // Option -c pour ne pas realiser d'edition de liens et -o pour preciser le fichier de sortie

2) Differences entre les deux commandes ?

     gcc bonjour.o bonsoir.o -o progexe --> L'executable sera nomme progexe
     gcc bonjour.o bonsoir.o            --> L'executable sera nomme a.out

     Cf gcc man option -o section

3) Differences entre les deux commandes ?

     gcc -c bonjour.c              --> Le fichier objet sera nomme implicitement bonjour.o
     gcc -c bonjour.c -o bonjour.o --> Le fichier objet sera nomme explicitement bonjour.o

     --> Pas de différence sur le résultat


4) Effet séquence de commandes suivante ?

     gcc -c bonjour.c -o bonjour
     ./bonjour

     Produit le fichier objet nomme bonjour en realisant le preprocessing, compiling, assembling mais pas le linking.
     On aura donc une erreur en executant via ./bonjour puisqu'il ne s'agit pas d'un fichier executable mais d'un fichier objet
*/