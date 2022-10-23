


float valeurPolynome(float A[], int N, float x0){
    float res;
    int i;
    int j;
    for(i = 0; i<N ; i++){
        res = res + A[i];
        for(j=i+1; j<N ; j++){
            A[j]=A[j]*x0;
        }
    }
    return res;
}



int main(){
    float tab[12] = {1,3,5,6};
    printf("%.3f",valeurPolynome(tab,4,1.2));
    return 0;
}