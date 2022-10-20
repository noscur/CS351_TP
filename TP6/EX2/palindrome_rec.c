#include <stdio.h>


void palindrome_rec(char * mot, int taille){
    switch(taille){
        case 0:
            printf("C'est un palindrome\n");
            break;
        case 1:
            printf("C'est un palindrome\n");
            break;
        default:
            if (mot[0]!=mot[taille-1]){
                printf("Ce n'est pas un palindrome\n");
                break;
            } else {
                *mot++;
                palindrome_rec(mot,taille-2);
            }
    }
}


int main(){
    palindrome_rec("kayzak",6);
    palindrome_rec("kayak",5);
    palindrome_rec("a",1);
    palindrome_rec("ala",3);
    palindrome_rec("kayuk",5);
    return 0;
}