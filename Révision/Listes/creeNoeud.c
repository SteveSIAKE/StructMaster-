#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;

typedef Node* liste;

Node* creerNoeud(int valeur){
    Node* N = (Node*)malloc(sizeOf(Node));
    if(N == NULL){
        printf("erreur d'allocation \n");
        exit(EXIT_FAILURE);
    }
    N->data = valeur;
    N->next = NULL;
    return N;
}