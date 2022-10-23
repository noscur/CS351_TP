#include <stdio.h>



int sommeDesImpairs(int d, int f){
    int res = 0;
    int compteur = d;
    for (compteur = d; compteur<=f ; compteur=compteur+2){
        res = res + compteur;
    }
    return res;
}

int estUneDecompositionDe(int d, int f){
    int res = -1;
    int cube = 1;
    int indice = 0;
    int i;
    int result = sommeDesImpairs(d,f);

    while(cube<result){
        indice++;
        cube = 1;
        for(i = 0; i<3 ; i++){
            cube = cube*indice;   
        }
        printf("%d\n",cube);
    }
    if (cube==result){
        res = indice;
    }
    return res;
}


int main(){
    printf("Pour 1,3: %s\n",sommeDesImpairs(1,3)==4 ? "ok":"error");
    printf("Pour 7,11: %s\n",sommeDesImpairs(7,11)==27 ? "ok":"error");   
    printf("Pour 7,11: %s\n",estUneDecompositionDe(7,11)==3 ? "ok":"error");   
    printf("Pour 3,7: %s\n",estUneDecompositionDe(3,7)==-1 ? "ok":"error");      
    return 0;    
}