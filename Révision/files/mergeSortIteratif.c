#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
Node* creerSingleton(int x) {
    Node* n = malloc(sizeof(Node));
    n->data = x;
    n->next = NULL;
    return n;
}
Node* fusion(Node* L1, Node* L2) {
    Node* head = NULL;
    Node** lastPtrRef = &head;

    while (L1 != NULL && L2 != NULL) {
        if (L1->data <= L2->data) {
            *lastPtrRef = L1;
            L1 = L1->next;
        } else {
            *lastPtrRef = L2;
            L2 = L2->next;
        }
        lastPtrRef = &((*lastPtrRef)->next);
    }

    if (L1 != NULL) {
        *lastPtrRef = L1;
    } else {
        *lastPtrRef = L2;
    }

    return head;
}
int main() {
    int T[] = {4,1,8,2,3,7,9,5,6};
    int n = 9;

    Node* file[n];
    int tete = 0, queue = 0;

    // création des listes singleton
    for (int i = 0; i < n; i++) {
        file[queue++] = creerSingleton(T[i]);
    }

    // boucle principale
    while (queue - tete > 1) {
        Node* L1 = file[tete++];
        Node* L2 = file[tete++];
        Node* L = fusion(L1, L2);
        file[queue++] = L;
    }

    // affichage
    Node* p = file[tete];
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");

    return 0;
}
