#include <stdio.h>

// Fonction utilitaire pour retourner les k premiers éléments du tableau
// Cette fonction correspond à l'opération "retourner(k)" de l'énoncé
void retourner(int tab[], int k) {
    int temp, start = 0;
    int end = k - 1;
    while (start < end) {
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        start++;
        end--;
    }
}

// Fonction pour trouver l'index de la plus grande crêpe dans tab[0...n-1]
int trouverMax(int tab[], int n) {
    int mi = 0;
    for (int i = 0; i < n; i++) {
        if (tab[i] > tab[mi]) {
            mi = i;
        }
    }
    return mi;
}

// Fonction principale implémentant votre algorithme
void triCrepes(int tab[], int n) {
    // POUR curr_size allant de n à 2 FAIRE
    for (int curr_size = n; curr_size > 1; curr_size--) {
        // 1. Trouver l'index 'mi' du maximum dans tab[0...curr_size-1]
        int mi = trouverMax(tab, curr_size);

        // 2. SI 'mi' n'est pas déjà à la fin (curr_size-1) ALORS
        if (mi != curr_size - 1) {
            // a. SI 'mi' > 0 ALORS : Ramener le max au sommet
            if (mi > 0) {
                retourner(tab, mi + 1);
            }

            // Envoyer le max (maintenant au sommet) au fond de la zone actuelle
            retourner(tab, curr_size);
        }
    }
}

// Fonction pour afficher le tableau
void afficherTableau(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int pile[] = {10, 2, 8, 3, 5, 4};
    int n = sizeof(pile) / sizeof(pile[0]);

    printf("Pile initiale : ");
    afficherTableau(pile, n);

    triCrepes(pile, n);

    printf("Pile triee : ");
    afficherTableau(pile, n);

    return 0;
}