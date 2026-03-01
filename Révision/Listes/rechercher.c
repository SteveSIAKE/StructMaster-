int rechercher(Node* head, int valeur) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == valeur)
            return 1;
        temp = temp->next;
    }
    return 0;
}
