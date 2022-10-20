#include <stdio.h>
#include <stdlib.h>
#include "pile.h"




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

