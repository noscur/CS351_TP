#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b){
    if (b != 0)
       return pgcd(b, a%b);
    else 
       return a;
}


int main(){
    int res = pgcd(126,-90);
    printf("Res = %d\n",res);
    return 0;
}