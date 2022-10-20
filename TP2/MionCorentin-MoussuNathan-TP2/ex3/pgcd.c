#include "pgcd.h"


int pgcd(int a, int b);

int pgcd(int a,int b){
    int reste;
    int div;

    while (a%b!=0){
        reste = a%b;
        div = a/b;
        a=b;
        b=reste;
    }
    div = b ;
    return div;
}
