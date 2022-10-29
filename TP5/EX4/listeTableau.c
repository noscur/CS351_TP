/*********************************************************************/
/* Realisation d'une liste chainee dans un tableau                   */
/* ioannis.parissis@grenoble-inp.fr                                  */
/* Sep 2012                                                          */
/*********************************************************************/
#include "listeTableau.h"


int elementLibre(liste l){
    int i = 0;
    while(l[i].suivant!=-1){
        i++;
    }
    return i;
}

void creerListeVide(liste l){
    int i;
    l[0].valeur = 0;
    l[0].suivant = 1;
    for (i = 1 ; i<TAILLEMAX ; i++){
        l[i].valeur = 0;
        l[i].suivant =-1;
    }

}
void insererElement(int x, liste l){
    int indice_New_elmt;
    int indice_act = 0;
    int indice_suivant  = l[indice_act].suivant;
    int valeur_suivante = l[indice_suivant].valeur;

    if (l[indice_suivant].suivant==-1){
        l[indice_suivant].valeur = x;
		l[indice_suivant].suivant = 0;
    } 
    else 
    {
		do {
			indice_act = indice_suivant;
			indice_suivant = l[indice_act].suivant;
			valeur_suivante = l[indice_act].valeur;
		} while(x<valeur_suivante);
		if (l[indice_suivant].valeur!=x){
			indice_New_elmt = elementLibre(l);
			l[indice_New_elmt].suivant = indice_suivant;  
			l[indice_New_elmt].valeur = x;
			l[indice_act].suivant = indice_New_elmt;
		} 
		else {
			printf("Element deja present\n");
		}
    }
}

void supprimerElement(int x, liste l){
    int i = 0;
    int indice_act = 0;
    int last_indice;
    while(i!=x){
        last_indice = indice_act;
        indice_act = l[indice_act].suivant;
        if (indice_act==0){
            printf("Element non existant\n");
            break;
        }
        i++;
    }
    if (indice_act!=0){
        l[last_indice].suivant = l[indice_act].suivant;
        l[indice_act].suivant = -1;
    }
}

void afficherListe(liste l){
    int indice_act = l[0].suivant;
    while((indice_act!=0) && (indice_act!=-1)){
        printf("%d ",l[indice_act].valeur);
        indice_act = l[indice_act].suivant;
    }
	printf("\n");
}


