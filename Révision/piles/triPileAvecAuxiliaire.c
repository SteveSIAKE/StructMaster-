// Exercice 2 : Tri d'une pile avec une pile auxiliaireSimilaire à l'exercice des "Crêpes", 
// cet exercice impose des contraintes physiques sur les mouvements de données.Énoncé :
// Vous disposez d'une Pile A contenant des entiers dans le désordre. Vous voulez trier ces entiers dans l'ordre croissant 
// (le plus petit au sommet) dans cette même pile.Vous avez le droit d'utiliser une seule autre pile (Pile B).
// Les seules opérations autorisées sont : push (empiler), pop (dépiler), peek (regarder le sommet), isEmpty (est vide). 
// Vous ne pouvez pas utiliser de tableaux ou de variables temporaires complexes.Écrire l'algorithme de tri.
// Quelle est la complexité temporelle de cet algorithme dans le pire des cas ?
// Transférer les éléments de A vers B en les maintenant triés dans B.Algorithme :
// Tant que A n'est pas vide, dépiler un élément temp de A.Tant que B n'est pas vide et que sommet(B) > temp, 
// déplacer les éléments de B vers A (car ils sont plus grands que temp, donc temp doit aller plus bas).
// Empiler temp dans B.À la fin, tout transférer de B vers A.Complexité : $O(n^2)$. 
// Pour chaque élément de A, on peut potentiellement déplacer tout B