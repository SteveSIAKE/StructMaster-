void insertionApres(Node* head, int cible, int valeur) {
    Node* temp = head;

    while (temp != NULL && temp->data != cible)
        temp = temp->next;

    if (temp == NULL) {
        printf("Valeur non trouvée\n");
        return;
    }

    Node* n = creerNoeud(valeur);
    n->next = temp->next;
    temp->next = n;
}
