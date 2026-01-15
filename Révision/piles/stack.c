#define MAX 200
#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int items[MAX];
    int top;
} Stack;

void initStack(Stack* s) {
    s->top = -1;
}
int isEmpty(Stack* s) {
    return s->top == -1;
}
int isFull(Stack* s) {
    return s->top == MAX - 1;
}
int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("La pile est vide\n");
        exit(EXIT_FAILURE);
    }
    return s->items[s->top--];
}
void push(Stack* s, int value) {
    if (isFull(s)) {
        printf("La pile est pleine\n");
        exit(EXIT_FAILURE);
    }
    s->items[++s->top] = value;
}
int peek(Stack* s, int *value) {
    if (isEmpty(s)) {
        printf("La pile est vide\n");
        exit(EXIT_FAILURE);
    }
    *value = s->items[s->top];
    return 1;
}

