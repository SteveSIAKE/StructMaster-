#include <stdio.h>
#include <stdlib.h>

typedef struct monome{
    int coefficient;
    int exponent;
}Monome;
Monome* creerMonome(int coefficient, int exponent){
    Monome* m = (Monome*)malloc(sizeof(Monome));
    if(m == NULL){
        printf("erreur d'allocation \n");
        exit(EXIT_FAILURE);
    }
    m->coefficient = coefficient;
    m->exponent = exponent;
    return m;
}
typedef struct Polynome{
    Monome monome;
    struct Polynome* next;
}Polynome;

typedef Polynome* listePoly;
listePoly creerPolynome(int coefficient, int exponent){
    listePoly P = (listePoly)malloc(sizeof(Polynome));
    if(P == NULL){
        printf("erreur d'allocation \n");
        exit(EXIT_FAILURE);
    }
    P->monome.coefficient = coefficient;
    P->monome.exponent = exponent;
    P->next = NULL;
    return P;
}



int main(){
    listePoly poly = creerPolynome(5, 3);
    printf("Monome: %dx^%d\n", poly->monome.coefficient, poly->monome.exponent);
    free(poly);
    return 0;
}