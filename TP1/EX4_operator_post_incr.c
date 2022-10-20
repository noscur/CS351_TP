#include <stdio.h>

int main(){
    /* Toutes les valeurs sont initialisées à 0 */
    int i,j,k,l;
    i = j =  k = l = 0;
    /* On va faire boucler tant que i est inférieur à 9 */
    while(i<9){
        printf("i++=%d, ++j=%d,k--=%d,--l=%d\n",i++,++j,k--,--l);
        /* On réalise une post incrémentation sur i cad on incrémente après avoir évalué i*/
        /* On réalise une pré incrémentation sur j cad on incrémente avant d'évaluer j*/
        /* On réalise une post décrémentation sur k cad on décrémente après avoir évalué k*/
        /* On réalise une pré décrémentation sur l cad on décrémente avant d'évaluer l*/
        printf ("i = %d, j = %d, k = %d, l = %d\n", i, j, k, l);
        /* On remarque les variables pré incrémentées ou pré décrémentées ont la même valeur sur le premier et le 2ème printf
        puisque la modification de la valeur est déjà réalisé sur la valeur affichée au premier printf.
        Pour les post incré. ou décré. la modification n'est pas réalisée donc on voit un -1 ou +1 de différence selon si
        c'est une incrémentation ou décrémentation.*/
    }
    return (0);
}