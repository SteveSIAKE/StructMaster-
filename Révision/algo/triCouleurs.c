#include <stdio.h>
#include <stdlib.h>
typedef enum { VERT, ROUGE, JAUNE } Couleur;
void triCouleur(Couleur* tab, int taille);
void swapC(Couleur *a, Couleur *b);
int main() {
    Couleur tab[] = {ROUGE, VERT, JAUNE, ROUGE, VERT, JAUNE, VERT, ROUGE};
    int taille = sizeof(tab) / sizeof(tab[0]);
    triCouleur(tab, taille);
    for (int i = 0; i < taille; i++) {
        switch (tab[i]) {
            case VERT: printf("VERT "); break;
            case ROUGE: printf("ROUGE "); break;
            case JAUNE: printf("JAUNE "); break;
        }
    }
    return 0;
}
void swapC(Couleur *a, Couleur *b) {
    Couleur temp = *a;
    *a = *b;
    *b = temp;
}
void triCouleur(Couleur* tab, int taille) {
    int low = 0, mid = 0, high = taille - 1;
    while (mid <= high) {
        switch (tab[mid])
        {
        case VERT:
            swapC(&tab[low], &tab[mid]);
            low++;
            mid++;
            break;
        case ROUGE:
            swapC(&tab[mid], &tab[high]);
            high--;
            break;
        case JAUNE:
            mid++;
            break;
        default:
            break;
        }
    }
}