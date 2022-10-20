#include <stdio.h>
#include "pgcd.h"

int pgcd(int a,int b){
    int reste;
    int div;

    while (a%b!=0){
        #if defined(MISEAUPOINT)
        printf("valeur courante de b = %d\n",b);
        #endif
        reste = a%b;
        div = a/b;
        a=b;
        b=reste;
    }
    div = b ;
    return div;
}


int main(){
    int a;
    int b;
    printf("PGCD: %d=%d\n",pgcd(33810,4116),294);
    printf("PGCD: %d=%d\n",pgcd(10,2),8);
    printf("Entrez a et b avec a>b\n");
    scanf("%d",&a);
    scanf("%d",&b);
 
    printf("PGCD(%d,%d)=%d\n",a,b,pgcd(a,b));
    return 0;
}

