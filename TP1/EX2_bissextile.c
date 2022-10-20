#include <stdio.h>

int annee_bissextile(int annee) {
    if((annee%4==0) && (annee%100!=0 || annee%400==0)){
        printf("%d est bissextile", annee);
    }
    else {
        printf("%d n'est pas bissextile", annee);
    }
    return(0);
} 

int main(){
    annee_bissextile(2000);
    printf("\n");
    annee_bissextile(1900);
    printf("\n");
    annee_bissextile(2004);
    printf("\n");
    annee_bissextile(1975);
    return 0;
}