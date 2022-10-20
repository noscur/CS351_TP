#include "graphlib.h"
#include "dessine.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	/* Définition des variables */
	int size = 100;
	
	int largeur = 5;
	int hauteur = 4;
	
	int largeur_pixl = size * largeur;
	int hauteur_pixl =  size * hauteur;
	
	gr_inits_w(largeur_pixl,hauteur_pixl,"Mosaique"); /* Initialise une fenetre */
	/*dessineMosaique(size, largeur, hauteur, 0, 400);   trace une mosaique */
	dessineMosaiqueAvecSouris(size, largeur, hauteur, 0, 400);
	cliquer(); /* temporise avec un clic */
	return(0);
}
