#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b){
    int r = abs(a - b);
    switch(b){
        case 0:
            return a;
        default:
            pgcd(b,r);
    }
}


int main(){
    int res = pgcd(126,90);
    printf("Res = %d\n",res);
    return 0;
}