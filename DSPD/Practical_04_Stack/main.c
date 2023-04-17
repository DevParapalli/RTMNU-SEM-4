#include <stdio.h>
#include <stdlib.h>

// Theory: Stack is a one ended list, where elements are added and removed from the same end.
// Theory: PUSH uses a preincrement as the top should always point to a defined element
// unless the stack is empty, in which case stack->top is -1

struct IntegerStackImpl {
    int top;
    unsigned size;
    int *array;
};

struct IntegerStackImpl *createStack(unsigned size) {
    struct IntegerStackImpl *stack = (struct IntegerStackImpl *)malloc(sizeof(struct IntegerStackImpl));
    stack->size = size;
    stack->top = -1;
    stack->array = (int *)malloc(stack->size * sizeof(int));
    return stack;
}

int isFull(struct IntegerStackImpl *stack) {
    return stack->top == stack->size - 1;
}

int isEmpty(struct IntegerStackImpl *stack) {
    return stack->top == -1;
}

void push(struct IntegerStackImpl *stack, int item) {
    if (isFull(stack)) {
        return;
    }
    stack->array[++(stack->top)] = item;
    printf("%d pushed to stack\n", item);
}

int pop(struct IntegerStackImpl *stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->array[(stack->top)--];
}

int peek(struct IntegerStackImpl *stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->array[stack->top];
}

void printStack(struct IntegerStackImpl *stack) {
    if (isEmpty(stack)) {
        return;
    }
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->array[i]);
    }
    printf("\n");
}

void deleteStack(struct IntegerStackImpl *stack) {
    if (stack) {
        if (stack->array) {
            free(stack->array);
        }
        free(stack);
    }
}

int main() {
    struct IntegerStackImpl *stack = createStack(100);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    printStack(stack);
    printf("%d popped from stack\n", pop(stack));
    printStack(stack);
    deleteStack(stack);
    return 0;
}