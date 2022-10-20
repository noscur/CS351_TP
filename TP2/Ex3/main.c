#include <stdio.h>
#include <stdlib.h>
#include "pgcd.h"
#include "main.h"

int quotient(int a, int b); 
int reste(int a, int b);
int valeurAbsolue(int a);
int ppcm(int a, int b);
int puissanceMB(int x, int n);
int sommeDesImpairs(int d, int f);
int estUneDecompositionDe(int d, int f);

int quotient(int a, int b){
    int result;    
    int a_signe;
    int b_signe;

    result = 0;
    a_signe = a;
    b_signe = b;

    if (b==0){
        printf("Error: Division by zero");
        return 0;
    }


    a = valeurAbsolue(a);
    b = valeurAbsolue(b);
    while(a>=b){
        a=a-b;
        result++;
    }
    if ((a_signe>0 && b_signe<0) || (a_signe<0 && b_signe>0)) {
        result = -result;
    }
    return result;
}

int reste(int a, int b){
    int result;
    result = a-quotient(a,b)*b;
    return result;
}

int valeurAbsolue(int a){
    int result;
    result=abs(a);
    return result;
}

int ppcm(int a,int b){
    int result;
    result = quotient(valeurAbsolue(a*b),pgcd(a,b));
    return result;
}

int puissanceMB(int x, int n){
    int N;
    int Y;
    int Z;
    int N_prec;
    int compteur;
    N = n;
    Y = 1;
    Z = x;
    N_prec = n;
    compteur = 0;

    while(N!=0){
        N_prec = N;
        N = quotient(N,2);
        if (reste(N_prec,2)!=0){
            Y = Z*Y; 
            compteur++;
        }
        Z = Z * Z;
        compteur++;
    }
    printf("\nNombre d'operation=%d\n",compteur);
    return Y;
}

int sommeDesImpairs(int d, int f){
    int somme;
    somme = 0;
    while (d<f){
        somme = somme + d;
        d = d + 2;
    }
    somme = somme + f;
    return somme;
}

int estUneDecompositionDe(int d, int f){
    int entierCube;
    int nbImpaire;
    nbImpaire = quotient((f-d),2)+1;
    entierCube = -1;
    if (puissanceMB(nbImpaire,3)==sommeDesImpairs(d,f)){
        entierCube = nbImpaire;
    }
    return entierCube;
}

int testBibliotheque(){
    
    printf("\nTest quotient\n");
    printf("\nDivision par 0 :%s\n",quotient(10,0)==0 ? "ok" : "error");
    printf("Signes différents:%s\n",quotient(-10,2)==-5 ? "ok" : "error");
    printf("Même signe:%s\n",quotient(50,3)==16 ? "ok" : "error");
    printf("Denominateur plus grand: %s\n",quotient(10,50)==0 ? "ok" : "error");
    
    printf("\nTest reste()\n");
    printf("Division par 0 :\n");
    reste(10,0);
    printf("\nSignes différents:%s\n",reste(-10,2)==0 ? "ok" : "error");
    printf("Même signe:%s\n",reste(50,3)==2 ? "ok" : "error");
    printf("Denominateur plus grand: %s\n",reste(10,50)==10 ? "ok" : "error");
    
    printf("\nTest valeurAbsolue() \n");
    printf("Valeur negative:%s\n",valeurAbsolue(-15)==abs(15) ? "ok" : "error");
    printf("Valeur positive: %s\n",valeurAbsolue(15)==abs(15) ? "ok" : "error");
    printf("Valeur nulle: %s\n",valeurAbsolue(0)==abs(0) ? "ok" : "error");
    
    printf("\nTest ppcm()\n");
    printf("Valeur standard: %s\n",ppcm(10,2)==10 ? "ok" : "error");
    
    printf("\nTest puissanceMB() \n");
    printf("Puissance 0: %s\n",puissanceMB(45,0)==1 ? "ok" : "error");
    printf("Puissance 1: %s\n",puissanceMB(45,1)==45 ? "ok" : "error");
    printf("Puissance paire: %s\n",puissanceMB(2,10)==1024 ? "ok" : "error");
    printf("Puissance impaire: %s\n",puissanceMB(2,13)==8192 ? "ok" : "error");

    printf("\nTest sommeDesImpairs() \n");
    printf("Pour 1,3: %s\n",sommeDesImpairs(1,3)==4 ? "ok":"error");
    printf("Pour 7,11: %s\n",sommeDesImpairs(7,11)==27 ? "ok":"error");

    printf("\nTest estUneDecompositionDe() \n");
    printf("Pour 7,13: %s\n",estUneDecompositionDe(7,13)==-1 ? "ok":"error");
    printf("Pour 7,11: %s\n",estUneDecompositionDe(7,11)==3 ? "ok":"error");

    return 0;
}

int main() {
    testBibliotheque();
    return 0;
}