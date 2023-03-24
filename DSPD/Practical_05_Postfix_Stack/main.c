#include <stdio.h>
#include <stdlib.h>

struct PostfixStackImpl {
    int top;
    unsigned size;
    int *array;
};

struct PostfixStackImpl *createStack(unsigned size) {
    struct PostfixStackImpl *stack = (struct PostfixStackImpl *) malloc(sizeof(struct PostfixStackImpl));
    stack->size = size;
    stack->top = -1;
    stack->array = (int *) malloc(stack->size * sizeof(int));
    return stack;
}

int isFull(struct PostfixStackImpl *stack) {
    return stack->top == stack->size - 1;
}

int isEmpty(struct PostfixStackImpl *stack) {
    return stack->top == -1;
}

int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void push(struct PostfixStackImpl *stack, int item) {
    if (isFull(stack)) {
        return;
    }
    short unsigned int sp = ++stack->top;
    stack->array[sp] = item;
}

int pop(struct PostfixStackImpl *stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->array[stack->top--];
}

int _iswhitespace(char c) {
    return c == ' ' || c == '\t' || c =='\0';
}

void printStack(struct PostfixStackImpl *stack) {
    if (isEmpty(stack)) {
        return;
    }
    for (int i = 0; i <= stack->top; i++) {
        printf("%d\t", stack->array[i]);
    }
    printf("\n");
}

int main() {
    struct PostfixStackImpl *stack = createStack(100);
    // char *expr = "2 3 4 * +\0";
    char *expr = "420 69 +\0";
    // char *expr = "3 93 +\0";
    // char *expr = "64 32 /\0";
    int i = 0;
    while(expr[i]) {
        if (_iswhitespace(expr[i])) {
            i++;
            continue;
        }
        if (isOperator(expr[i])) {
            int a = pop(stack);
            int b = pop(stack);
            switch (expr[i]) {
                case '+':
                    push(stack, a + b);
                    break;
                case '-':
                    push(stack, a - b);
                    break;
                case '*':
                    push(stack, a * b);
                    break;
                case '/':
                    push(stack, a / b);
                    break;
            }
        }
        else {
            int item = expr[i] - '0';
            while(expr[i] && !_iswhitespace(expr[i+1]) && !isOperator(expr[i+1])) {
                item = item * 10 + expr[i+1] - '0';
                i++;
            }
            push(stack, item);
        }
        i++;
    }
    // printStack(stack); // This simply prints the result, since the stack is empty now.
    printf("Postfix Expression '%s' evaluates to %d", expr, pop(stack));
}