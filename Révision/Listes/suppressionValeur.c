Node* suppressionValeur(Node* head, int valeur) {
    if (head == NULL)
        return NULL;

    if (head->data == valeur) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node* curr = head;
    while (curr->next != NULL && curr->next->data != valeur)
        curr = curr->next;

    if (curr->next == NULL)
        return head;

    Node* temp = curr->next;
    curr->next = temp->next;
    free(temp);

    return head;
}
