#include "graphlib.h"

/* trace un carre incline */
void dessineCarre(int posx, int posy, int size){
	
	int cdroite_x = posx+(size/2);
	int cdroite_y = posy-(size/2);
	
	int cgauche_x = posx-(size/2);
	int cgauche_y = posy-(size/2);
	
	int chaut_x = posx;
	int chaut_y = posy-size;
	
	line(posx, posy, cdroite_x, cdroite_y);
	line(posx, posy, cgauche_x, cgauche_y);
	line(cdroite_x, cdroite_y, chaut_x, chaut_y);
	line(cgauche_x, cgauche_y, chaut_x, chaut_y);
}

/* trace un carre incline avec ses diagonales */
void dessineCarreDiag(int posx, int posy, int size){
	
	int cdroite_x = posx+(size/2);
	int cdroite_y = posy-(size/2);
	
	int cgauche_x = posx-(size/2);
	int cgauche_y = posy-(size/2);
	
	int chaut_x = posx;
	int chaut_y = posy-size;
	
	line(posx, posy, cdroite_x, cdroite_y);    
	line(posx, posy, cgauche_x, cgauche_y);
	line(posx, posy, chaut_x, chaut_y);
	
	line(cdroite_x, cdroite_y, chaut_x, chaut_y);
	line(cdroite_x, cdroite_y, cgauche_x, cgauche_y);
	
	line(cgauche_x, cgauche_y, chaut_x, chaut_y);
}

/* trace une mosaique */
void dessineMosaique(int taille_carre, int largeur, int hauteur, int posx, int posy){
	int i;
	int j;

	for(j=1; j<= hauteur; j++){
		for(i=1; i<=largeur; i++){
			dessineCarre(posx*i, posy*j, taille_carre);
		}
	}
}

/* Dessine une mosaique dont l'origine est le curseur de souris */
void dessineMosaiqueAvecSouris(int taille_carre, int largeur, int hauteur, int posx, int posy){
	int *x = 0;
	int *y = 0;
	cliquer_xy(x, y);
	dessineMosaique(taille_carre, largeur, hauteur, x, y);
}