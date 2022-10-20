#include "Polynome.h"
#include <stdio.h>
#include <string.h>

void addPolynomes(Polynome p1, Polynome p2, Polynome res);


void addPolynomes(Polynome p1, Polynome p2, Polynome res){
    int compteur;
    int compteur_res;

    compteur = 0;
    compteur_res = 0;
    
    while((p1[compteur].degre>=0) && (p2[compteur].degre>=0)){
        if (p1[compteur].degre>p2[compteur].degre){
            res[compteur_res].degre = p1[compteur].degre;
            res[compteur_res].coeff = p1[compteur].coeff;
            compteur_res++;
            res[compteur_res].degre = p2[compteur].degre;
            res[compteur_res].coeff = p2[compteur].coeff;
            compteur_res++;
        } 
        else if (p1[compteur].degre<p2[compteur].degre)
        {
            res[compteur_res].degre = p2[compteur].degre;
            res[compteur_res].coeff = p2[compteur].coeff;
            compteur_res++;
            res[compteur_res].degre = p1[compteur].degre;
            res[compteur_res].coeff = p1[compteur].coeff;
            compteur_res++;
        } 
        else {
            res[compteur_res].degre = p2[compteur].degre;
            res[compteur_res].coeff = p2[compteur].coeff+p1[compteur].coeff;
            compteur_res++;           
        }
        compteur++;
    }
    if (p1[compteur].degre>=0) {
        while (p1[compteur].degre>=0) {
            res[compteur_res].degre = p1[compteur].degre;
            res[compteur_res].coeff = p1[compteur].coeff;
            compteur_res++;
            compteur++;
        }
    } 
    else {
        while (p2[compteur].degre>=0){
            res[compteur_res].degre = p2[compteur].degre;
            res[compteur_res].coeff = p2[compteur].coeff;
            compteur_res++;
            compteur++;
        }
    }
    res[compteur_res].degre = -12;
    res[compteur_res].coeff = 3.4; 
}

void afficheur_Polynome(Polynome p1){
    char poly[500];
    char temp[10];
    int i;
    printf("%.3f X^%d",p1[0].coeff,p1[0].degre); 
    for (i=1 ; p1[i].degre>=0 ; i++){
        printf(" + %.3f X^%d",p1[i].coeff,p1[i].degre);
    }
    printf("\n");
}


void main() {
    Polynome a = {{1.4,2},{3.6,1},{2.0,0},{34.0,-12}};
    Polynome b = {{-1.2,3},{2.4,1},{34.0,-12}};
    Polynome res;
    addPolynomes(a,b,res); /* To test when degre min is first poly and test the order since degre 3's term isn't in the first poly*/
    afficheur_Polynome(res);
    addPolynomes(b,a,res); /* To test when degre min is second poly and test the order since degre 3's term isn't in the second poly*/
    afficheur_Polynome(res);
}