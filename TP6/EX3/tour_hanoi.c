#include <stdio.h>


void hanoi(int nb_disque_A, char depart, char intermediaire, char arrivee){
    /*  Deplacer premier sur C, 2eme sur B, puis mettre 1er sur 2eme*/
    
    if (nb_disque_A!=0){
        
        hanoi(nb_disque_A-1,depart,arrivee,intermediaire);
        printf("%c -> %c\n",depart,arrivee);
        hanoi(nb_disque_A-1,intermediaire,depart,arrivee);
    }
}


int main(){
    hanoi(3,'A','B','C');
}