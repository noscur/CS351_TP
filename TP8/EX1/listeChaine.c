#include <stdio.h>
#include "listeChaine.h"


void insererElement(int x, liste *l){
    element *element_act = l; 
    element *e = (element* ) malloc(sizeof(element));
    e->valeur = x;
    while((element_act->suivant!=NULL) && (e->valeur>(*(*element_act).suivant).valeur)){
        element_act = element_act->suivant;
    }
    e->suivant=element_act->suivant;
    element_act->suivant = e;
}

void supprimerElement(int i, liste *l){
    int j = 0;
    element *element_act = l;
    element *element_suivant = element_act->suivant;
    while ((element_suivant) && (j!=i)){
        j++;
        element_act = element_suivant;
        element_suivant = element_act->suivant;
    }
    if (j==i){
        element_act->suivant = element_suivant->suivant;
        free(element_suivant);
    }
}

void afficherListe(liste l){
    element *indice_act = l;
    while(indice_act->suivant!=NULL){
        indice_act = (*indice_act).suivant;
        printf("%d ", (*indice_act).valeur);
    }
	printf("\n");
}


int main(){
    element *e = malloc(sizeof(element)/sizeof(char));
    (*e).valeur = 0;
    (*e).suivant = NULL;
    insererElement(4,e);
    afficherListe(e);
    insererElement(2,e);
    afficherListe(e);
    insererElement(3,e);
    afficherListe(e);
    insererElement(6,e);
    afficherListe(e);
    supprimerElement(0,e);
    afficherListe(e);
    supprimerElement(1,e);
    afficherListe(e);
    supprimerElement(1,e);
    afficherListe(e);
    supprimerElement(0,e);
    afficherListe(e);
}