#include <stdio.h>
#include <stdlib.h>

struct StackImpl {
    int top;
    unsigned size;
    int *array;
};

struct StackImpl *createStack(unsigned size) {
    struct StackImpl *stack = (struct StackImpl *)malloc(sizeof(struct StackImpl));
    stack->size = size;
    stack->top = -1;
    stack->array = (int *)malloc(stack->size * sizeof(int));
    return stack;
}

int isFull(struct StackImpl *stack) {
    return stack->top == stack->size - 1;
}

int isEmpty(struct StackImpl *stack) {
    return stack->top == -1;
}

int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '(' || c == ')';
}

int precedenceOrder(char c) {
    switch (c) {
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

int associativity(char c) {
    switch (c) {
        case '^':
            return 1;
        case '*':
        case '/':
        case '+':
        case '-':
            return 0;
        default:
            return -1;
    }
}

int pop(struct StackImpl *stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->array[stack->top--];
}

void push(struct StackImpl *stack, int item) {
    if (isFull(stack)) {
        return;
    }
    short unsigned int sp = ++stack->top;
    stack->array[sp] = item;
}

int main(int argc, char *argv[]) {
    struct StackImpl *stack = createStack(100);
    char *infix = "k+l+(m^n^o)*p";
    char *postfix = (char *)malloc(100 * sizeof(char));
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        if (isOperator(infix[i])) {
            if (infix[i] == '(') {
                push(stack, infix[i]);
            } else if (infix[i] == ')') {
                // If closing, pop and print until opening
                while (!isEmpty(stack) && stack->array[stack->top] != '(') {
                    postfix[j++] = pop(stack);
                }
                pop(stack);
            } else {
                // If incoming operator has higher precedence than top of stack, push
                if (isEmpty(stack) || precedenceOrder(infix[i]) > precedenceOrder(stack->array[stack->top])) {
                    push(stack, infix[i]);
                }
                // If incoming operator has equal precedence to top of stack, check associativity
                else if (precedenceOrder(infix[i]) == precedenceOrder(stack->array[stack->top])) {
                    if (associativity(infix[i]) == 1) {
                        push(stack, infix[i]);
                    } else {
                        postfix[j++] = pop(stack);
                        push(stack, infix[i]);
                    }
                }
                // If incoming operator has lower precedence than top of stack, pop and print until empty or higher precedence
                else {
                    while (!isEmpty(stack) && precedenceOrder(infix[i]) < precedenceOrder(stack->array[stack->top])) {
                        postfix[j++] = pop(stack);
                    }
                    push(stack, infix[i]);
                }
            }
        } else {
            postfix[j++] = infix[i];
        }
        i++;
    }
    while (!isEmpty(stack)) {
        postfix[j++] = pop(stack);
    }
    postfix[j] = '\0';
    printf("%s\n", postfix);
    return 0;
}