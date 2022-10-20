#include <stdio.h>
#include <stdlib.h>
#include "listeTableau.h"

int main()
{
    /* d�claration du tableau contenant la liste */
    element maListe[TAILLEMAX];
    /*Test creation de Liste vide*/
    creerListeVide(maListe);
    afficherListe(maListe);
    /* Test insertion du premier element (en debut et fin de liste chainee puisque c'est l'unique element)*/
    insererElement(3,maListe);
    afficherListe(maListe);
    /* Insertion d'un 2eme element à la fin de la liste chainee*/
    insererElement(4,maListe);
    afficherListe(maListe);
    /* Insertion d'un élément au début de la liste chainee */
    insererElement(2,maListe);
    afficherListe(maListe);
    /* Test insertion d'un element deja present */
	insererElement(3,maListe);
    afficherListe(maListe);
    /* Test suppression d'un element non present*/
	supprimerElement(6,maListe);
	afficherListe(maListe);
    /* Test suppression d'un element present au milieu de la liste chainee */
	supprimerElement(2,maListe);
	afficherListe(maListe);

    return 0;
}
