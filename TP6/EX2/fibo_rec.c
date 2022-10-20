#include <stdio.h>


int fibo_rec(int n){
    switch(n){
        case 0:
            return 0;
        case 1:
            return 1;
        default:
            return fibo_rec(n-1) + fibo_rec(n-2);
    }
}


int main(){
    int res = fibo_rec(3);
    printf("%d",res);
    return 0;
}