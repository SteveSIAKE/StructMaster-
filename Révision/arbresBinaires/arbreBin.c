#include <stdio.h>
#include <stdlib.h>

// Structure d'un nœud d'arbre binaire
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;
typedef Node* Arbre;
// Fonction pour créer un nouveau nœud
Node* nouveauNoeud(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
// Fonction pour insérer un nœud dans l'arbre binaire de recherche
Arbre inserer(Arbre racine, int data) {
    if (racine == NULL) {
        return nouveauNoeud(data);
    }
    if (data < racine->data) {
        racine->left = inserer(racine->left, data);
    } else {
        racine->right = inserer(racine->right, data);
    }
    return racine;
}
// Parcours en ordre (in-order) de l'arbre binaire
void parcoursEnOrdre(Arbre racine) {
    if (racine != NULL) {
        parcoursEnOrdre(racine->left);
        printf("%d ", racine->data);
        parcoursEnOrdre(racine->right);
    }
}
//recherche d'un élément dans l'arbre binaire de recherche
int rechercher(Arbre racine, int data) {
    if (racine == NULL) {
        return 0; // Élément non trouvé
    }
    if (racine->data == data) {
        return 1; // Élément trouvé
    }
    if (data < racine->data) {
        return rechercher(racine->left, data);
    } else {
        return rechercher(racine->right, data);
    }
}
//removal d'un élément dans l'arbre binaire de recherche
Arbre supprimer(Arbre racine, int data) {
    if (racine == NULL) {
        return racine;
    }
    if (data < racine->data) {
        racine->left = supprimer(racine->left, data);
    } else if (data > racine->data) {
        racine->right = supprimer(racine->right, data);
    } else {
        // Cas 1 : nœud avec un seul enfant ou aucun enfant
        if (racine->left == NULL) {
            Node* temp = racine->right;
            free(racine);
            return temp;
        } else if (racine->right == NULL) {
            Node* temp = racine->left;
            free(racine);
            return temp;
        }
        // Cas 2 : nœud avec deux enfants
        Node* temp = racine->right;
        while (temp && temp->left != NULL) {
            temp = temp->left;
        }
        racine->data = temp->data;
        racine->right = supprimer(racine->right, temp->data);
    }
    return racine;
}
// Remplacement d'un élément dans l'arbre binaire de recherche
Arbre remplacer(Arbre racine, int ancienData, int nouveauData) {
    racine = supprimer(racine, ancienData);
    racine = inserer(racine, nouveauData);
    return racine;
}
//recherche du minimum dans l'arbre binaire de recherche
int trouverMin(Arbre racine) {
    Node* current = racine;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current->data;
}
//recherche du maximum dans l'arbre binaire de recherche
int trouverMax(Arbre racine) {
    Node* current = racine;
    while (current && current->right != NULL) {
        current = current->right;
    }
    return current->data;
}
// Calcul du nombre de nœuds dans l'arbre binaire de recherche
int compterNoeuds(Arbre racine) {
    if (racine == NULL) {
        return 0;
    }
    return 1 + compterNoeuds(racine->left) + compterNoeuds(racine->right);
}
// niveau d'un nœud dans l'arbre binaire de recherche
int niveauNoeud(Arbre racine, int data, int niveau) {
    if (racine == NULL) {
        return -1; // Élément non trouvé
    }
    if (racine->data == data) {
        return niveau;
    }
    if (data < racine->data) {
        return niveauNoeud(racine->left, data, niveau + 1);
    } else {
        return niveauNoeud(racine->right, data, niveau + 1);
    }
}
// Fonction principale pour tester l'arbre binaire
int main() {
    Arbre racine = NULL;
    racine = inserer(racine, 5);
    inserer(racine, 3);
    inserer(racine, 7);
    inserer(racine, 2);
    inserer(racine, 4);
    inserer(racine, 6);
    inserer(racine, 8);

    printf("Parcours en ordre de l'arbre binaire : ");
    parcoursEnOrdre(racine);
    printf("\n");

    return 0;
}