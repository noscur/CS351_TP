#include <stdio.h>

int somme_n_entiers_while(){
    int somme = 0;
    int n;
    printf("Entrer le nombre n d'entier à sommer:"); 
    scanf("%d",&n);
    int i = 0;
    while(i<=n) {
        somme=somme+i;
        i++;
    }
    
    
    return somme;
}

int somme_n_entiers_do(){
    int somme = 0;
    int n;
    printf("Entrer le nombre n d'entier à sommer:"); 
    scanf("%d",&n);
    int i = 0;
    do {
        somme=somme+i;
        i++;
    } while (i<=n);
    return somme;
}


int main(){
    printf("Test du while: %d\n",somme_n_entiers_while());
    printf("Test du do: %d\n",somme_n_entiers_do());
    return 0;
}


/* ii) Si la valeur entrée est négative, on obtient 0 avec la boucle while et 0 avec la boucle do */