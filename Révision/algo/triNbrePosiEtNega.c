#include <stdio.h>

void trierNombresPositifsEtNegatifs(int tab[], int n) {
    int gauche = 0;
    int droite = n - 1;

    while (gauche < droite) {
        if (tab[gauche] < 0) {
            gauche++;
        }
        else if (tab[droite] >= 0) {
            droite--;
        }
        else {
            int temp = tab[gauche];
            tab[gauche] = tab[droite];
            tab[droite] = temp;
            gauche++;
            droite--;
        }
    }
}
void afficherTableau(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}
int main() {
    int tab[] = {12, -7, 5, -3, 9, -1, 0, -4, 8};
    int n = sizeof(tab) / sizeof(tab[0]);

    printf("Tableau initial : ");
    afficherTableau(tab, n);

    trierNombresPositifsEtNegatifs(tab, n);

    printf("Tableau après le tri : ");
    afficherTableau(tab, n);

    return 0;
}