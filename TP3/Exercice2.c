#include <stdio.h>

float valeurPolynome(float A[], int N, float x0);

float valeurPolynome(float A[], int N, float x0) {
    int i = 1;
    float valeur = A[0];
    while (i<=N) {
        for(int a = i; a<=N; a++){
            A[a] = A[a]*x0;
        }
        valeur = valeur + A[i];
        i++;
    }
    return valeur;
}

int main(){
    float tableau[3] = { 1.0 , 2.0 , 3.0};
    printf("%f",valeurPolynome(tableau,2,1.2));
}