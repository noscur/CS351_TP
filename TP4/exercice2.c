/* Exercice 2 */

/* Q1 */

#include <stdio.h>
#include <stdlib.h>

int myStrlen(const char *chaine);
char* myStrcpy(const char *chaineSource, char *chaineDest);
void afficherEnHexadecimal(const char * mot);
void affichageEnDecimal(const char * mot);
char * mettreEnMajuscule(char * chaineSrc);
char * mettreEnMinuscule(char * chaineSrc);
char * transformerMinMaj(char * chaineSrc);
char * retournerMot(char * chaineSrc);
int rechercherCaractereG(const char * chaine,const char car);
int rechercherCaractereD(const char * chaine, char car);
int estPalindrome(const char * mot, int d, int f);
int comparerChaine(const char * chaine1,const char * chaine2);
int valeurDecimale(const char * chaine);
char * intVersChaine(int entier, char * chaineDest);


/* Q1 */
int myStrlen(const char *chaine) {
    int taille = -1;
    char car;
    do {
        taille++;
        car = chaine[taille];
    }  while (car!='\0') ;
    return taille;
}


char* myStrcpy(const char *chaineSource, char *chaineDest) {
    int compteur = 0;
    while (chaineSource[compteur]!='\0') {
        chaineDest[compteur] = chaineSource[compteur];
        compteur++;
    }
    chaineDest[compteur]='\0';
    return chaineDest;
}
/* Q2 */
void afficherEnHexadecimal(const char * mot){
    int i = 0;
    while(i<myStrlen(mot)) {
        printf("%02X",mot[i]);
        i++;
    }
    printf("\n");
}
/* Q3 */
void affichageEnDecimal(const char * mot){
    int i = 0;
    while(i<myStrlen(mot)) {
        printf("%u",mot[i]);
        i++;
    }
    printf("\n");
}
/* Q4 */
char * mettreEnMajuscule(char * chaineSrc) {
    int i = 0;
    while(chaineSrc[i]!='\0') {
        if ((chaineSrc[i] >= 'a') && (chaineSrc[i] <= 'z')) {
            chaineSrc[i] = chaineSrc[i] + ('A' - 'a');
        }
        i++;
    }
    chaineSrc[i] = '\0';
    return chaineSrc;
}
/* Q5 */
char * mettreEnMinuscule(char * chaineSrc){
    int i = 0;
    while(chaineSrc[i]!='\0') {
        if ((chaineSrc[i] >= 'A') && (chaineSrc[i] <= 'Z')) {
            chaineSrc[i] = chaineSrc[i] + ('a' - 'A');
        } else {
            chaineSrc[i] = chaineSrc[i];
        }
        i++;
    }
    chaineSrc[i] = '\0';
    return chaineSrc;
}

/* Q6 */
char * transformerMinMaj(char * chaineSrc){
    int i = 0;
    while(chaineSrc[i]!='\0') {
        if ((chaineSrc[i] >= 'A') && (chaineSrc[i] <= 'Z')) {
            chaineSrc[i] = chaineSrc[i] + ('a' - 'A');
        } 
        else if ((chaineSrc[i] >= 'a') && (chaineSrc[i] <= 'z')) {
            chaineSrc[i] = chaineSrc[i] + ('A' - 'a');
        }
        i++;
    }
    chaineSrc[i] = '\0';
    return chaineSrc;
}

/* Q7 */

char * retournerMot(char * chaineSrc){
    int taille = myStrlen(chaineSrc);
    int tab[100];
    int i = 0;
    while(chaineSrc[i]!='\0') {
        tab[i] = chaineSrc[taille-i-1];
        i++;
    }
    tab[i] = '\0';
    int j = 0;
    while(tab[j]!='\0'){
        chaineSrc[j] = tab[j];
        j++;
    }
    return chaineSrc;
}

/* Q8 */

int rechercherCaractereG(const char * chaine,const char car){
    
    int indice = -1;
    int i = 0;
    while((chaine[i]!='\0') && (indice==-1)){
        if (chaine[i]==car){
            indice = i;
        }
    i++;
    }
    return indice;
}

/* Q9 */

int rechercherCaractereD(const char * chaine, char car){
    int taille = myStrlen(chaine);
    int indice = -1;
    int i = 0;

    while((chaine[i]!='\0') && (indice==-1)){
        if (chaine[taille-i]==car){
            indice = taille-i;
        }
    i++;
    }
    return indice;
}

/* Q10 */

int estPalindrome(const char * mot, int d, int f){
    int palindrome = 1;
    while (d<f){
        if (mot[d]!=mot[f]){
            palindrome = 0;
        }
        d++;
        f--;
    }
    return palindrome;
}


/* Q11 */

int comparerChaine(const char * chaine1,const char * chaine2){
    int compare = 0;
    int i = 0;
    while((chaine1[i]!='\0') && (chaine2[i]!='\0') && (compare==0)){
        if (chaine1[i]>chaine2[i]){
            compare=1;
        } 
        else if (chaine1[i]<chaine2[i]) {
            compare=-1;
        }

        i++;
    }
    return compare;
}

/* Q12 */

int valeurDecimale(const char * chaine) {
    int taille = myStrlen(chaine);
    int valeur = 0;
    int poids = 1;
    for (int i=taille-1; i>0 ; i--){
        valeur = valeur + (chaine[i] - 48 )*poids;
        poids = poids * 10;
    }

    if ((taille>0) && (chaine[0]=='-')){
        valeur=-valeur;
    }
    else if (taille>0)
    {
        valeur = valeur + (chaine[0] - 48)*poids;
    }
    return valeur;
}

/* Q13 */

char * intVersChaine(int entier, char * chaineDest){
    int puissance = 10;
    int quotient = abs(entier/puissance);
    int reste = abs(entier%puissance);
    int tab[100];
    int i = 0;

    tab[i] = (reste + 48); 
    while (quotient!=0){
        i++;
        reste = abs(quotient%puissance);
        quotient = abs(quotient/puissance);
        tab[i] = (reste + 48);
    }
    if (entier<0){
        i++;
        chaineDest[0]='-';
        for(int a = 1; a!=i+1 ; a++){
            chaineDest[a] = tab[i-a];
        }
    } 
    else
    {
        for(int a = 0; a!=i+1 ; a++){
            chaineDest[a] = tab[i-a];
        }
    }
    return chaineDest;
}

int main() {

    printf("%d\n",myStrlen("Program"));
    printf("%d\n",myStrlen(""));
    char dest[100];
    printf("%s\n",myStrcpy("Program",dest));
    afficherEnHexadecimal("Bonjour");
    affichageEnDecimal("Bonjour");
    char hello[] = "HeLlO";
    printf("%s\n",mettreEnMajuscule(hello));
    printf("%s\n",mettreEnMinuscule(hello));
    char hello1[] = "HeLlO";
    printf("%s\n",transformerMinMaj(hello1));
    char retourner[] = "retourner";
    printf("%s\n",retournerMot(retourner));
    printf("%d\n",rechercherCaractereG("Hello",'l'));
    printf("%d\n",rechercherCaractereD("Hello",'l'));
    printf("%d\n",estPalindrome("kayak",0,4));
    printf("%d\n",estPalindrome("kayyuk",0,5));
    printf("%d\n",comparerChaine("hello","hello"));
    printf("%d\n",comparerChaine("hallo","helo"));
    printf("%d\n",valeurDecimale("-245"));
    printf("%d\n",valeurDecimale("245235"));
    char chaine[100];
    printf("%s\n",intVersChaine(1234567,chaine));
    printf("%s\n",intVersChaine(-1234567890,chaine));
    return 0;

}