Node* suppressionTete(Node* head) {
    if (head == NULL)
        return NULL;

    Node* temp = head;
    head = head->next;
    free(temp);

    return head;
}
