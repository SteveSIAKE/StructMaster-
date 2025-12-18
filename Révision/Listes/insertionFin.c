Node* insertionFin(Node* head, int valeur) {
    Node* newNode = creerNoeud(valeur);

    if (head == NULL) {
        return newNode;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
