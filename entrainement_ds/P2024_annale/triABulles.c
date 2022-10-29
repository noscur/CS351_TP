


void triABulles(int T[], int nb){
    int i;
    int j;
    int temp;
    for(i=nb-1; i>0; i--){
        for(j=0 ; j<i;j++){
            if(T[j+1]<T[j]){
                temp = T[j];
                T[j]=T[j+1];
                T[j+1]=temp;
            }
        }

    int a;
    for(a=0; a<nb;a++){
        printf("%d ",T[a]);
    }
    printf("\n");    
    }

}


int valeurDe(char *machaine){
    int res = 0;
    int i = 0;
    if (machaine[i]=='-'){
        i++;
    }
    while(machaine[i]!='\0'){
        res=res*10;
        res=res+machaine[i]-'0';
        i++;
    }
    if(machaine[0]=='-'){
        res=-res;
    }
    return res;
}

void intVersChaine(int x, char c[]){
    char c2[14];
    int i = 0;
    int modulo = 10;
    int valeur;
    int j;
    while(x!=0){
        valeur = x%modulo;
        c2[i] = valeur + '0';
        x = x - valeur;
        x = x/modulo;
        i++;
    }
    for(j=0 ; j<i;j++){
        c[j]=c2[i-1-j];
    }
    c[j+1]='\0';
}

int estSouschaineDe(char * s1, char * s2){
    int res = 0;
    int i;
    int j = 0;
    int pareil = 0;
    for (i=0 ; s2[i]!='\0'; i++){
       if ((s1[j]=='\0') && (pareil = 1)){
           res = 1;
       }
       if(s2[i]==s1[j]){
           pareil = 1;
           j++;
       } 
       else {
           pareil = 0;
           j=0;

       }
    }
    return res;
}

int main(){
    int tab[6] = {12,4,6,2,8,4};
    triABulles(tab,6);
    char chaine[10] = "-4567";
    printf("%d\n",valeurDe(chaine));
    char c[14];
    intVersChaine(2546,c);
    printf("%s\n",c);
    printf("%d\n",estSouschaineDe("allo","halloween"));
    printf("%d\n",estSouschaineDe("allu","halloween"));
}