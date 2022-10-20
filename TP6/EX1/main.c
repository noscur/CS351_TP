#include <stdio.h>
#include <stdlib.h>
#include "pile.h"


/*
Commandes courantes 
next: permet d'executer la ligne courante, rentre dans la fonction appelee si c'est un appel de fonction.
step: permet d'executer la ligne courante. Si une fonction est appelee, elle est traite comme une seule instruction.
print: permet d'afficher des valeurs du programme et le resultat d'expressions.
display: affiche automatiquement la valeur des expressions a chaque breakpoint.
continue: Permet de continuer l'execution depuis un breakpoint
finish: Continue l'execution jusqu'au return de la fonction actuelle et si une valeur est retournee, elle est affichee.

Pour debugger au niveau assembleur : 
stepi permet d'executer la ligne courante, rentre dans la fonction appelee si c'est un appel de fonction.
nexti permet d'executer la ligne courante. Si une fonction est appelee, elle est traite comme une seule instruction.





*/

int calculer(char operateur, pileInt maPile){
    int b = depiler(maPile);
    int a = depiler(maPile);
    int res;
    switch(operateur){
        case '+':
            res = a+b;
            break;
        case '-':
            res = a - b; 
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
    }
    return res;
}

int main(){
    char expression[] = "2 4 + 5 * 6 7 - /";
    char expressionSansEspaces[100]; 
    int j;
    pileInt maPile = creerPile();
    int x;
    char operateur;
    int i = 0;

    for (j = 0 ; expression[j]!='\0' ; j++){
        if (j%2==0){
            expressionSansEspaces[j/2] = expression[j];
        }
    }


    while (expressionSansEspaces[i]!='\0'){
        if ((expressionSansEspaces[i]>='0') && (expressionSansEspaces[i]<='9')){
            x = expressionSansEspaces[i]-'0';
            empiler(maPile,x);
        }
        else {
            operateur = expressionSansEspaces[i];
            empiler(maPile,calculer(operateur,maPile));
        }
        i++;
    }
    printf("%d",depiler(maPile));
    return 0;
}

