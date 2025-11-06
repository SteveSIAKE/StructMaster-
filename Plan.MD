# Plan d'Apprentissage - Projet Bibliothèque C
## Université de Dschang - Niveau 2

---

## 🎯 OBJECTIFS FINAUX (Semaine 3)

### Objectif Principal
Créer et publier une bibliothèque C de structures de données fonctionnelle et documentée.

### Livrables attendus
1. ✅ Une bibliothèque C compilable (fichiers .h et .c)
2. ✅ Au moins 2-3 structures de données implémentées
3. ✅ Un fichier d'exemple fonctionnel
4. ✅ Un Makefile pour automatiser la compilation
5. ✅ Documentation (README.md)
6. ✅ Publication sur GitHub
7. ✅ Code testé et sans erreurs

### Compétences à acquérir
- Manipulation avancée des pointeurs en C
- Allocation dynamique de mémoire (malloc/free)
- Création de bibliothèques statiques (.a)
- Utilisation de Make
- Gestion de versions avec Git
- Documentation de code

---

## 📅 SEMAINE 1 : Fondations et pointeurs

### Jour 1 (Lundi) - 2h : Révision des bases
**Objectif :** Consolider les fondamentaux du C

**À faire :**
- [ ] Réviser les types de données (int, char, float, etc.)
- [ ] Réviser les structures (`struct`)
- [ ] Réviser les fonctions (déclaration, définition, appel)
- [ ] Exercice : Créer une structure `Etudiant` avec nom, âge, note

**Ressources :**
- Relire vos notes de cours sur les structures
- [Tutoriel C structures](https://www.learn-c.org/en/Structures)

**Évaluation :**
```c
// Pouvez-vous écrire ceci sans aide ?
struct Point {
    int x;
    int y;
};

void afficher_point(struct Point p) {
    printf("(%d, %d)\n", p.x, p.y);
}
```

---

### Jour 2 (Mardi) - 2-3h : Pointeurs partie 1
**Objectif :** Maîtriser les pointeurs de base

**À faire :**
- [ ] Comprendre qu'est-ce qu'un pointeur (adresse mémoire)
- [ ] Déclaration : `int *ptr;`
- [ ] Opérateurs `&` (adresse de) et `*` (déréférencement)
- [ ] Pointeurs et tableaux
- [ ] Exercices : Échanger deux variables avec des pointeurs

**Ressources :**
- Chapitre pointeurs de votre livre de C
- Vidéo YouTube : "Pointeurs en C pour débutants"

**Exercice pratique :**
```c
// Écrivez cette fonction vous-même
void echanger(int *a, int *b) {
    // Votre code ici
}

int main() {
    int x = 5, y = 10;
    echanger(&x, &y);
    // x devrait être 10, y devrait être 5
}
```

---

### Jour 3 (Mercredi) - 2-3h : Pointeurs partie 2
**Objectif :** Pointeurs et structures

**À faire :**
- [ ] Pointeurs vers structures
- [ ] Opérateur `->` vs `.`
- [ ] Passage de structures par pointeur aux fonctions
- [ ] Exercice : Créer et modifier une structure via pointeur

**Exercice pratique :**
```c
struct Rectangle {
    int largeur;
    int hauteur;
};

// Écrivez une fonction qui modifie le rectangle via pointeur
void agrandir(struct Rectangle *r, int facteur) {
    // Votre code ici
}
```

---

### Jour 4 (Jeudi) - 3h : Allocation dynamique
**Objectif :** Comprendre malloc, calloc, free

**À faire :**
- [ ] Différence entre mémoire statique et dynamique
- [ ] Utilisation de `malloc()`
- [ ] Utilisation de `free()` - TRÈS IMPORTANT !
- [ ] Dangers : fuites mémoire, pointeurs pendants
- [ ] Exercice : Créer un tableau dynamique

**Ressources :**
- Documentation : `man malloc`
- Article : "Dynamic Memory Allocation in C"

**Exercice pratique :**
```c
// Créez un tableau dynamique de taille n
int* creer_tableau(int n) {
    // Utilisez malloc ici
}

// N'oubliez JAMAIS de libérer !
void detruire_tableau(int *tableau) {
    // Utilisez free ici
}
```

**⚠️ CHECKPOINT :** Si vous ne comprenez pas malloc/free, ARRÊTEZ-VOUS. Relisez, demandez de l'aide. C'est CRUCIAL.

---

### Jour 5 (Vendredi) - 3h : Mini-projet de la semaine
**Objectif :** Consolider les acquis

**Mini-projet : Gestionnaire de contacts simple**

Créez un programme qui :
- [ ] Définit une structure `Contact` (nom, téléphone)
- [ ] Crée dynamiquement un tableau de contacts
- [ ] Ajoute des contacts
- [ ] Affiche tous les contacts
- [ ] Libère proprement la mémoire

**Code de départ :**
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char nom[50];
    char telephone[15];
};

// Complétez ces fonctions
struct Contact* creer_contacts(int nombre);
void ajouter_contact(struct Contact *contacts, int index, 
                     const char *nom, const char *tel);
void afficher_contacts(struct Contact *contacts, int nombre);
void liberer_contacts(struct Contact *contacts);

int main() {
    // Votre code ici
    return 0;
}
```

**Critères de réussite :**
- ✅ Le programme compile sans warnings
- ✅ Pas de fuites mémoire (testez avec `valgrind` si disponible)
- ✅ Le code est commenté

---

### Weekend - Repos et révision
- [ ] Relire vos notes de la semaine
- [ ] Refaire les exercices difficiles
- [ ] Préparer vos questions pour la semaine 2

---

## 📅 SEMAINE 2 : Structures de données

### Jour 6 (Lundi) - 3h : Listes chaînées - Théorie
**Objectif :** Comprendre le concept de liste chaînée

**À faire :**
- [ ] Dessiner une liste chaînée sur papier
- [ ] Comprendre la structure d'un nœud (data + next)
- [ ] Comprendre les opérations de base (insertion, suppression)
- [ ] Regarder des animations de listes chaînées

**Ressources :**
- Vidéo : "Linked Lists Explained" (chercher sur YouTube)
- VisualGo : https://visualgo.net/en/list (TRÈS UTILE !)

**Exercice sur papier :**
```
Dessinez ce qui se passe quand on :
1. Crée une liste vide
2. Insère 10 au début
3. Insère 20 au début
4. Insère 30 à la fin
5. Supprime le premier élément

Dessinez chaque étape avec les pointeurs !
```

---

### Jour 7 (Mardi) - 3-4h : Listes chaînées - Pratique partie 1
**Objectif :** Implémenter les fonctions de base

**À faire :**
- [ ] Créer la structure `Node`
- [ ] Fonction `creer_noeud()`
- [ ] Fonction `inserer_debut()`
- [ ] Fonction `afficher_liste()`

**Code à compléter vous-même :**
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// ÉCRIVEZ CETTE FONCTION
struct Node* creer_noeud(int valeur) {
    // 1. Allouer mémoire pour un nœud
    // 2. Initialiser data avec valeur
    // 3. Initialiser next à NULL
    // 4. Retourner le nœud
}

// ÉCRIVEZ CETTE FONCTION
void inserer_debut(struct Node **head, int valeur) {
    // 1. Créer un nouveau nœud
    // 2. Le nouveau->next pointe vers l'ancien head
    // 3. head devient le nouveau nœud
}

// ÉCRIVEZ CETTE FONCTION
void afficher_liste(struct Node *head) {
    // Parcourir et afficher chaque élément
}

int main() {
    struct Node *ma_liste = NULL;
    
    inserer_debut(&ma_liste, 10);
    inserer_debut(&ma_liste, 20);
    inserer_debut(&ma_liste, 30);
    
    afficher_liste(ma_liste);
    // Devrait afficher : 30 -> 20 -> 10
    
    return 0;
}
```

**⚠️ ATTENTION :** Pourquoi `inserer_debut(struct Node **head, ...)` ?
Parce qu'on modifie le pointeur head lui-même ! Dessinez-le sur papier.

---

### Jour 8 (Mercredi) - 3-4h : Listes chaînées - Pratique partie 2
**Objectif :** Fonctions avancées

**À faire :**
- [ ] Fonction `inserer_fin()`
- [ ] Fonction `supprimer_debut()`
- [ ] Fonction `rechercher()`
- [ ] Fonction `liberer_liste()` - IMPORTANT !

**Exercices :**

```c
// 1. Insérer à la fin (plus difficile !)
void inserer_fin(struct Node **head, int valeur) {
    // Cas spécial : liste vide
    // Sinon : parcourir jusqu'au dernier nœud
}

// 2. Supprimer le premier élément
void supprimer_debut(struct Node **head) {
    // Gérer le cas liste vide
    // Sauvegarder head dans temp
    // head = head->next
    // free(temp)
}

// 3. Rechercher une valeur
int rechercher(struct Node *head, int valeur) {
    // Retourner 1 si trouvé, 0 sinon
}

// 4. Libérer toute la liste
void liberer_liste(struct Node **head) {
    // Parcourir et free chaque nœud
}
```

---

### Jour 9 (Jeudi) - 3h : Piles (Stack)
**Objectif :** Implémenter une pile avec une liste chaînée

**À faire :**
- [ ] Comprendre le principe LIFO (Last In First Out)
- [ ] Implémenter `push()` (c'est juste inserer_debut!)
- [ ] Implémenter `pop()`
- [ ] Implémenter `peek()` (voir le sommet)

**Application pratique :**
Créez un programme qui vérifie si les parenthèses sont équilibrées :
```
"(())" → Valide
"(()" → Invalide
"()()" → Valide
```

---

### Jour 10 (Vendredi) - 3h : Files (Queue)
**Objectif :** Implémenter une file

**À faire :**
- [ ] Comprendre le principe FIFO (First In First Out)
- [ ] Structure avec `front` et `rear`
- [ ] Implémenter `enqueue()` (ajouter à la fin)
- [ ] Implémenter `dequeue()` (retirer du début)

**Mini-projet de la semaine :**
Simulateur de file d'attente à la banque :
- 5 clients arrivent
- Chaque client est servi dans l'ordre d'arrivée
- Afficher l'ordre de service

---

### Weekend - Pratique intensive
- [ ] Refaire TOUTES les fonctions de liste chaînée de mémoire
- [ ] Si vous bloquez, c'est normal ! Recommencez.
- [ ] L'objectif : comprendre chaque pointeur

---

## 📅 SEMAINE 3 : Réalisation du projet

### Jour 11 (Lundi) - 2h : Configuration du projet
**Objectif :** Mettre en place la structure

**À faire :**
- [ ] Créer la structure de dossiers (include/, src/, examples/)
- [ ] Créer list.h (déclarations uniquement)
- [ ] Créer list.c (implémentations)
- [ ] Installer Git si pas encore fait

**Structure à créer :**
```
mon-projet/
├── include/
│   └── list.h
├── src/
│   └── list.c
├── examples/
│   └── exemple.c
└── README.md
```

---

### Jour 12 (Mardi) - 4h : Implémentation
**Objectif :** Coder les structures de données

**À faire :**
- [ ] Implémenter TOUTES les fonctions de liste chaînée
- [ ] Ajouter des commentaires détaillés
- [ ] Tester chaque fonction individuellement

**Checklist :**
```
Liste chaînée :
□ Création/destruction
□ Insertion (début, fin, position)
□ Suppression (début, fin, position)
□ Recherche
□ Affichage
□ Taille

Pile :
□ Push
□ Pop
□ Peek
□ is_empty

File :
□ Enqueue
□ Dequeue
□ Front
□ is_empty
```

---

### Jour 13 (Mercredi) - 3h : Tests et débogage
**Objectif :** Vérifier que tout fonctionne

**À faire :**
- [ ] Créer exemple.c avec tests de toutes les fonctions
- [ ] Compiler : `gcc -Wall -Wextra -Iinclude src/list.c examples/exemple.c -o test`
- [ ] Corriger TOUS les warnings et erreurs
- [ ] Tester avec différentes entrées

**Tests minimaux :**
```
Pour chaque structure :
✓ Créer et détruire
✓ Ajouter 10 éléments
✓ Supprimer 5 éléments
✓ Rechercher un élément existant
✓ Rechercher un élément inexistant
✓ Vider complètement
```

---

### Jour 14 (Jeudi) - 3h : Makefile et documentation
**Objectif :** Automatiser et documenter

**À faire :**
- [ ] Créer le Makefile (commencer simple)
- [ ] Rédiger le README.md complet
- [ ] Ajouter des commentaires Doxygen dans le code

**Makefile simple de départ :**
```makefile
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

all: exemple

exemple: src/list.c examples/exemple.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f exemple

.PHONY: all clean
```

**README.md doit contenir :**
- Description du projet
- Comment compiler
- Comment utiliser
- Exemples de code
- Votre nom et université

---

### Jour 15 (Vendredi) - 3h : Publication sur GitHub
**Objectif :** Partager votre travail

**À faire :**
- [ ] Créer un compte GitHub
- [ ] Créer un nouveau repository
- [ ] Initialiser Git localement
- [ ] Faire le premier commit
- [ ] Pusher sur GitHub

**Commandes Git de base :**
```bash
git init
git add .
git commit -m "Initial commit"
git remote add origin https://github.com/VOTRE_NOM/projet.git
git push -u origin main
```

---

## 📊 CRITÈRES D'ÉVALUATION (Auto-évaluation)

### Code (50%)
- [ ] Compile sans erreurs ni warnings (10%)
- [ ] Toutes les fonctions implémentées (20%)
- [ ] Gestion correcte de la mémoire (10%)
- [ ] Code propre et indenté (10%)

### Documentation (30%)
- [ ] README.md complet (10%)
- [ ] Commentaires dans le code (10%)
- [ ] Exemples fonctionnels (10%)

### Bonnes pratiques (20%)
- [ ] Structure de projet claire (5%)
- [ ] Makefile fonctionnel (5%)
- [ ] Commits Git réguliers (5%)
- [ ] Tests effectués (5%)

---

## 🆘 RESSOURCES D'AIDE

### Si vous êtes bloqué :
1. **Relisez vos notes** de cours
2. **Dessinez sur papier** ce qui se passe en mémoire
3. **Utilisez printf()** pour déboguer
4. **Demandez de l'aide** à vos camarades ou professeurs
5. **Cherchez sur Google** : "C linked list implementation"

### Sites utiles :
- VisualGo : https://visualgo.net/ (visualisation)
- Learn-C : https://www.learn-c.org/
- GeeksforGeeks : https://www.geeksforgeeks.org/
- Stack Overflow : pour des questions spécifiques

### Commandes de compilation utiles :
```bash
# Compilation simple
gcc fichier.c -o programme

# Avec warnings
gcc -Wall -Wextra fichier.c -o programme

# Avec include directory
gcc -Iinclude src/list.c exemple.c -o programme

# Débogage
gcc -g fichier.c -o programme
gdb ./programme
```

---

## 💡 CONSEILS IMPORTANTS

1. **Ne copiez-collez JAMAIS de code sans comprendre**
2. **Dessinez toujours les pointeurs sur papier**
3. **Testez chaque fonction immédiatement après l'avoir écrite**
4. **Faites des commits Git régulièrement**
5. **Prenez des pauses** - le cerveau a besoin de repos
6. **N'ayez pas peur des erreurs** - elles font partie de l'apprentissage

---

## 🎯 CHECKLIST FINALE

Avant de considérer votre projet terminé :

### Technique
- [ ] Le code compile sans warnings
- [ ] Tous les tests passent
- [ ] Pas de fuites mémoire (vérifier avec valgrind)
- [ ] Le Makefile fonctionne (make && make clean)

### Documentation
- [ ] README.md complet et clair
- [ ] Commentaires dans le code
- [ ] Exemples d'utilisation fournis

### Publication
- [ ] Code sur GitHub
- [ ] Repository public
- [ ] Commits avec messages clairs

### Présentation (si nécessaire)
- [ ] Démo préparée
- [ ] Explications des choix techniques
- [ ] Connaissance des complexités algorithmiques

---

## 📈 SUIVI DE PROGRESSION

Cochez au fur et à mesure :

**Semaine 1 :**
- [ ] Jour 1 terminé
- [ ] Jour 2 terminé
- [ ] Jour 3 terminé
- [ ] Jour 4 terminé
- [ ] Jour 5 terminé

**Semaine 2 :**
- [ ] Jour 6 terminé
- [ ] Jour 7 terminé
- [ ] Jour 8 terminé
- [ ] Jour 9 terminé
- [ ] Jour 10 terminé

**Semaine 3 :**
- [ ] Jour 11 terminé
- [ ] Jour 12 terminé
- [ ] Jour 13 terminé
- [ ] Jour 14 terminé
- [ ] Jour 15 terminé

**Projet final :**
- [ ] Code fonctionnel
- [ ] Documentation complète
- [ ] Publié sur GitHub

---

**Bonne chance ! Vous allez y arriver ! 💪**

N'oubliez pas : l'apprentissage de la programmation est un marathon, pas un sprint. Prenez votre temps pour bien comprendre chaque concept.