Node* insertionTete(Node* head, int valeur) {
    Node* n = creerNoeud(valeur);
    n->next = head;
    return n;
}
