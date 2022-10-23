#include <stdio.h>

int palindrome(char * chaine, int l){
    int res = 1;
    int compteur = 0;
    for(compteur = 0; (compteur<l/2) && (res==1) ; compteur++){
        if(chaine[compteur] != chaine[l-1-compteur]){
            res = 0;
        }
    }

    return res;
}


int palindrome_wtht_div(char * chaine, int l){
    int res = 1;
    int compteur = 0;
    for(compteur = 0; (compteur<l-compteur-1) && (res==1) ; compteur++){
        if(chaine[compteur] != chaine[l-1-compteur]){
            res = 0;
        }
    }

    return res; 
}


int main(){
    printf("%d\n",palindrome("kayak",5));
    printf("%d\n",palindrome("kayuk",5));
    printf("%d\n",palindrome("kaygak",6));
    printf("%d\n",palindrome_wtht_div("kayak",5));
    printf("%d\n",palindrome_wtht_div("kayuk",5));
    printf("%d\n",palindrome_wtht_div("kaygak",6));
    return 0;
}