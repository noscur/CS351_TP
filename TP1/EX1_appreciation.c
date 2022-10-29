#include <stdio.h>


/* If imbriqués */
int appreciationIfElse(char appreciation) {
    if (appreciation=='A'){
         printf("Très bien\n");
    } 
    else if (appreciation=='B'){
         printf("Bien\n");
    } 
    else if (appreciation=='C'){
         printf("Assez bien\n");
    } 
    else if (appreciation=='D'){
         printf("Passable\n");
    } 
    else if (appreciation=='E'){
         printf("Insuffisant\n");
    }
    else {
         printf("Erreur de note\n");
    }
    return 0;
} 
/* If en séquence sans imbrication*/
int appreciationIfSequence(char appreciation) {
    if (appreciation=='A'){
         printf("Très bien\n");
    } 
    if (appreciation=='B'){
         printf("Bien\n");
    } 
    if (appreciation=='C'){
         printf("Assez bien\n");
    } 
    if (appreciation=='D'){
         printf("Passable\n");
    } 
    if (appreciation=='E'){
         printf("Insuffisant\n");
    } 
    if ((appreciation<'A') && (appreciation>'E')){
         printf("Erreur de note\n");
    }
    return 0;
} 

/* Switch case */

int appreciationSwitch(char appreciation){
     switch (appreciation){
          case 'A':
               printf("Très bien\n");
               break;
          case 'B':
               printf("Bien\n");
               break;
          case 'C':
               printf("Assez bien\n");
               break;
          case 'D':
               printf("Passable\n");
               break;
          case 'E':
               printf("Insuffisant\n");
               break;
          default:
               printf("Erreur de note\n");
               break;

    }
    return 0;
}


int main(){
    appreciationIfElse('A');
    appreciationIfElse('B');
    appreciationIfSequence('C');
    appreciationIfSequence('D');
    appreciationSwitch('E');
}