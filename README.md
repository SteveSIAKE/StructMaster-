# 📘 **StructMaster – Bibliothèque de structures de données, algorithmes de tri et de recherche en C**

## 🧩 **Description**

**StructMaster** est une bibliothèque écrite en **langage C** qui rassemble une collection robuste, modulaire et réutilisable de :

- **Structures de données fondamentales**
- **Algorithmes de tri classiques et avancés**
- **Algorithmes de recherche efficaces**

Ce projet est développé dans le cadre du cours de **structure de données** et de **programmation en C** en niveau 2 informatique.
Il a pour objectif d’aider les étudiants à **comprendre, manipuler et expérimenter** les concepts essentiels : pointeurs, gestion mémoire, modularité, complexité algorithmique.

StructMaster se veut également un outil pratique pour les projets, travaux dirigés et apprentissage individuel.

---

## 🎯 **Objectifs du projet**

- Implémenter les **structures de données** les plus utilisées (listes, piles, files, arbres…).
- Implémenter un **grand nombre d’algorithmes de tri** (Simple, Efficaces, Avancés).
- Implémenter les **algorithmes de recherche** (linéaire, dichotomique, sur arbres, etc.).
- Fournir une **bibliothèque modulaire**, claire et réutilisable.
- Apprendre les fondamentaux : **pointeurs, malloc/free, modularité, abstraction**.
- Permettre l’exécution de **tests** et de **démonstrations** pour chaque module.
- Servir de **référence pédagogique** pour d’autres étudiants.

---

## 📚 **Contenu de la bibliothèque**

### 🧱 **1. Structures de données**

| Module                          | Description                         | Fichiers              |
| ------------------------------- | ----------------------------------- | --------------------- |
| Liste chaînée                   | Insertion / suppression / recherche | `list.h` — `list.c`   |
| Pile (Stack)                    | LIFO                                | `stack.h` — `stack.c` |
| File (Queue)                    | FIFO                                | `queue.h` — `queue.c` |
| Arbre binaire                   | Insertion, recherche, parcours      | `tree.h` — `tree.c`   |
| Tableau dynamique _(optionnel)_ | Tableau extensible                  | `array.h` — `array.c` |

---

### 🔢 **2. Algorithmes de tri implémentés**

StructMaster proposera un large catalogue d’algorithmes, classés par complexité.

#### **🔸 Tri simples**

- Bubble Sort
- Selection Sort
- Insertion Sort

#### **🔹 Tri efficaces**

- Merge Sort
- Quick Sort
- Heap Sort
- Shell Sort

#### **🔸 Tri spécialisés**

- Counting Sort
- Radix Sort
- Bucket Sort

#### **🔹 Tri sur listes chaînées**

- Merge Sort (spécial liste)
- Insertion Sort

Chaque algorithme sera documenté avec :

- sa complexité (meilleur, moyen, pire cas)
- ses caractéristiques (stable, en place, récursif…)
- un code clair et commenté

---

### 🔍 **3. Algorithmes de recherche**

#### **🔹 Sur tableaux**

- Recherche linéaire
- Recherche dichotomique

#### **🔸 Sur listes**

- Recherche séquentielle
- (optionnel) Jump search

#### **🔹 Sur arbres**

- Recherche dans un arbre binaire
- Parcours : infixe, préfixe, postfixe

Chaque algorithme est décrit et testé dans le dossier `tests/`.

---

## 📁 **Structure du projet**

```
StructMaster/
│
├── include/                    # Tous les fichiers .h (interfaces)
│   │
│   ├── core/                  # Base du projet
│   │   ├── sm_types.h         # Types génériques (structs, bool, etc.)
│   │   └── sm_utils.h         # Fonctions utilitaires
│   │
│   ├── structures/           # Structures de données
│   │   ├── list.h
│   │   ├── stack.h
│   │   ├── queue.h
│   │   ├── tree.h
│   │   └── vector.h          # Tableau dynamique (optionnel)
│   │
│   ├── algorithms/           # Algorithmes classés proprement
│   │   ├── sorting/          # Tri
│   │   │   ├── bubble_sort.h
│   │   │   ├── insertion_sort.h
│   │   │   ├── selection_sort.h
│   │   │   ├── merge_sort.h
│   │   │   ├── quick_sort.h
│   │   │   ├── heap_sort.h
│   │   │   ├── shell_sort.h
│   │   │   ├── counting_sort.h
│   │   │   ├── radix_sort.h
│   │   │   └── sort_utils.h      # Fonctions utilitaires
│   │   │
│   │   ├── searching/         # Recherche
│   │   │   ├── linear_search.h
│   │   │   ├── binary_search.h
│   │   │   ├── tree_search.h
│   │   │   └── search_utils.h
│   │
│   └── structmaster.h        # Header principal qui inclut tout
│
├── src/                      # Implémentations .c
│   │
│   ├── core/
│   │   ├── sm_utils.c
│   │   └── sm_types.c        # Si besoin
│   │
│   ├── structures/
│   │   ├── list.c
│   │   ├── stack.c
│   │   ├── queue.c
│   │   ├── tree.c
│   │   └── vector.c
│   │
│   ├── algorithms/
│   │   ├── sorting/
│   │   │   ├── bubble_sort.c
│   │   │   ├── insertion_sort.c
│   │   │   ├── selection_sort.c
│   │   │   ├── merge_sort.c
│   │   │   ├── quick_sort.c
│   │   │   ├── heap_sort.c
│   │   │   ├── shell_sort.c
│   │   │   ├── counting_sort.c
│   │   │   ├── radix_sort.c
│   │   │   └── sort_utils.c
│   │   │
│   │   ├── searching/
│   │   │   ├── linear_search.c
│   │   │   ├── binary_search.c
│   │   │   ├── tree_search.c
│   │   │   └── search_utils.c
│   │
│   ├── main.c                # Démonstration / tests simples
│
├── tests/                    # Tests unitaires et exemples d’usage
│   ├── structures/
│   │   ├── test_list.c
│   │   ├── test_stack.c
│   │   ├── test_queue.c
│   │   ├── test_tree.c
│   │   └── test_vector.c
│   │
│   ├── algorithms/
│   │   ├── sorting/
│   │   │   ├── test_bubble_sort.c
│   │   │   ├── test_quick_sort.c
│   │   │   ├── test_merge_sort.c
│   │   │   └── test_heap_sort.c
│   │   │
│   │   └── searching/
│   │       ├── test_linear_search.c
│   │       ├── test_binary_search.c
│   │       └── test_tree_search.c
│
├── docs/                    # Documentation (PDF, notes, schémas UML)
│   └── algorithms_complexity.md
│
├── Makefile
├── .gitignore
└── README.md

```

---

## ⚙️ **Compilation**

### Avec Makefile :

```bash
make
./structmaster
```

### Sans Makefile :

```bash
gcc src/*.c -I include -o structmaster
./structmaster
```

---

## 🧪 **Exemple d’utilisation : Tri rapide (Quick Sort)**

```c
#include <stdio.h>
#include "sort.h"

int main() {
    int arr[] = {12, 5, 3, 8, 7};
    int n = 5;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
```

---

## 🧑‍💻 **Auteur**

**Steve SIAKE ,....., et **
Étudiants en Informatique – Université de Dschang
📚 Passionné par : C, structures de données, génie logiciel, React, design graphique.

---

## 📜 **Licence**

Projet ouvert pour usage éducatif et académique.
Mentionner les auteurs pour toute réutilisation publique.

---
##⚠️ **La Règle d'Or** (Sacrée et inviolable)
La branche main est la vitrine de notre projet. 
Elle doit TOUJOURS compiler, TOUJOURS passer au propre sous Valgrind. 
PERSONNE n'a le droit de coder directement sur la branche main.

---
## 🛠️ Guide de Collaboration (Workflow Git & GitHub)

Pour que notre projet reste propre, fonctionnel et que nous puissions travailler à 3 sans écraser le code des autres, nous appliquons un **workflow professionnel strict**.

🚨 **LA RÈGLE D'OR : La branche `main` est sacrée.** 🚨  
Elle doit **TOUJOURS** compiler sans erreur et passer les tests mémoire (Valgrind).  
**Personne ne code, ni ne pousse (push) directement sur `main`.** (La branche est d'ailleurs verrouillée par GitHub).

Voici la boucle de travail en 5 étapes que chaque développeur doit scrupuleusement respecter lorsqu'il s'assigne une **Issue**.

### 🔄 Les 5 Étapes du Développeur StructMaster

### 1. Se synchroniser avant de commencer
Toujours récupérer le travail validé par l'équipe avant de commencer à coder.
```bash
git checkout main
git pull origin main
```
---
### 2. Créer son espace de travail isolé (La Branche)

Regardez le numéro de votre Issue GitHub (ex: Issue #5). 
Créez une branche nommée avec le type de tâche et ce numéro.
```bash
git checkout -b feat/5-arbre-binaire
```
 Types courants : feat/ (nouvelle fonctionnalité), fix/ (correction de bug), chore/ (maintenance).
---
### 3. Coder et Sauvegarder (Faire des Commits)

Écrivez votre code, vérifiez avec le Makefile, et lancez clang-format. Ensuite, sauvegardez votre progression avec un commit respectant notre norme (voir plus bas).
```bash
git add src/structures/tree.c include/tree.h
git commit -m "feat(tree): implémentation de l'insertion dans le BST"
```
---
### 4. Envoyer le travail sur GitHub
Une fois la fonctionnalité terminée, poussez votre branche sur les serveurs de GitHub.
```bash
git push origin feat/5-arbre-binaire
```
---
### 5. La validation par l'équipe (Pull Request / PR)

Allez sur la page GitHub du projet, un bouton vert "Compare & pull request" est apparu.
Titre de la PR : Le même que votre commit principal.
Description : Écrivez Closes #5 (remplacez 5 par votre numéro d'Issue, cela fermera le ticket automatiquement).
Attendez l'approbation : Vous avez besoin du feu vert d'au moins un coéquipier qui va relire le code (Code Review) avant de cliquer sur Merge pull request.
---
---
### 📝 Convention des Commits
Pour garder un historique clair, le message de vos commits doit toujours commencer par l'un de ces préfixes (Conventional Commits) :
- 🟢 feat: (Nouvelle fonctionnalité) ➔ ex: feat(list): ajout de sm_list_insert_tail
- 🔴 fix: (Correction d'un bug) ➔ ex: fix(sort): résolution de la fuite mémoire dans quick_sort
- 📘 docs: (Ajout/Modification de documentation) ➔ ex: docs: mise à jour du readme pour le workflow
- ⚙️ chore: (Outils, config, Makefile, .clang-format) ➔ ex: chore: ajout du flag -Werror au Makefile
- 🧪 test: (Ajout d'un fichier de test unitaire) ➔ ex: test(tree): ajout du test pour valider la hauteur de l'arbre
