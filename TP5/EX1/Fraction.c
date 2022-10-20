#include "Fraction.h"
#include <stdio.h>

void addFraction(Fraction f1, Fraction f2) ;
void subFraction(Fraction f1, Fraction f2) ;
void mulFraction(Fraction f1, Fraction f2) ;
void divFraction(Fraction f1, Fraction f2) ;
int pgcd(int a,int b);

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

void addFraction(Fraction f1, Fraction f2) {
    Fraction res;
    int pgcd_res;
    res.num = f1.num*f2.den + f2.num*f1.den;
    res.den = f1.den*f2.den;
    pgcd_res = pgcd(res.num,res.den);
    res.num = res.num/pgcd_res;
    res.den = res.den/pgcd_res;
    printf("\nLe résultat est %d/%d\n",res.num,res.den);
}

void subFraction(Fraction f1, Fraction f2){
    Fraction res;
    int pgcd_res;
    res.num = f1.num*f2.den - f2.num*f1.den;
    res.den = f1.den*f2.den;
    pgcd_res = pgcd(res.num,res.den);
    res.num = res.num/pgcd_res;
    res.den = res.den/pgcd_res;
    printf("\nLe résultat est %d/%d\n",res.num,res.den);
}
void mulFraction(Fraction f1, Fraction f2) {
    Fraction res;
    int pgcd_res;
    res.num = f1.num*f2.num;
    res.den = f1.den*f2.den;
    pgcd_res = pgcd(res.num,res.den);
    res.num = res.num/pgcd_res;
    res.den = res.den/pgcd_res;
    printf("\nLe résultat est %d/%d\n",res.num,res.den);
}
void divFraction(Fraction f1, Fraction f2) {
    Fraction res;
    int pgcd_res;
    res.num = f1.num*f2.den;
    res.den = f1.den*f2.num;
    pgcd_res = pgcd(res.num,res.den);
    res.num = res.num/pgcd_res;
    res.den = res.den/pgcd_res;
    printf("\nLe résultat est %d/%d\n",res.num,res.den);
}

