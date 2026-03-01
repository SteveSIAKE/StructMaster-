#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;
typedef struct Stack {
    Node *top;
} Stack;
void initStack(Stack *s) {
    s->top = NULL;
}
int isEmpty(Stack *s) {
    return s->top == NULL;
}
int isFull(Stack *s) {
    return 0; // Une pile dynamique n'est jamais pleine tant que la mémoire est disponible
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("La pile est vide\n");
        exit(EXIT_FAILURE);
    }
    Node *temp = s->top;
    int poppedValue = temp->data;
    s->top = s->top->next;
    free(temp);
    return poppedValue;
}
int peek(Stack *s, int *value) {
    if (isEmpty(s)) {
        printf("La pile est vide\n");
        exit(EXIT_FAILURE);
    }
    *value = s->top->data;
    return 1;
}
int push(Stack *s, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erreur d'allocation mémoire\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;
    return 1;
}
void freeStack(Stack *s) {
    int x;
    while (!isEmpty(s)) {
        pop(s, &x);
    }
}
int main() {
    Stack s;
    initStack(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    int value;
    peek(&s, &value);
    printf("Top element is %d\n", value);
    while (!isEmpty(&s)) {
        printf("Popped %d from stack\n", pop(&s));
    }
    freeStack(&s);
    return 0;
}