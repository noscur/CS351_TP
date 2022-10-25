#include <stdio.h>

/*
L'algorithme de tri rapide realise enormement de deplacement dans le tableau,
ainsi si la complexite est mesuree par le nombre de deplacement, celle-ci est très importante
en comparaison d'autres algorithmes de tri.
*/



void quicksort(int tab[],int s, int e){
    int pivot = tab[s];
    int indice_pivot = s;
    int i;
    int temp_val;
    int compteur_inf = s;
    for(i = s+1 ; i<=e ; i++){
        temp_val = tab[i];        
        if(pivot>tab[i]){
            tab[i] = tab[compteur_inf+1];
            tab[compteur_inf+1] = temp_val;
            compteur_inf++;
        }
	}
    temp_val = tab[compteur_inf];
    tab[compteur_inf] = pivot;
    tab[indice_pivot] = temp_val;
    indice_pivot = compteur_inf;
    if (indice_pivot-1-s>0){
        quicksort(tab,s,indice_pivot-1);
    }
    if (e-indice_pivot-1>0){
        quicksort(tab,indice_pivot+1,e);
    }
}


int main(){
    int tab[20] = {13,19,17,15,12,16,18,4,11};
    quicksort(tab,0,8);
	for( int i = 0 ; i < 9; i++){
		printf("%d\t",tab[i]);
	}

}