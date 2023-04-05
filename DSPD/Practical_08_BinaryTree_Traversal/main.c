#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node* createTree(int data) {
    struct Node* root = createNode(data);
    return root;
}

void insertLeftRight(struct Node* root, int dataLeft, int dataRight) {
    root->left = createNode(dataLeft);
    root->right = createNode(dataRight);
}

void printPreorder(struct Node* root) {
    if (root == NULL) return;
    printf("%d", root->data);
    printPreorder(root->left);
    printPreorder(root->right);
}

void printPostorder(struct Node* root) {
    if (root == NULL) return;
    printPostorder(root->left);
    printPostorder(root->right);
    printf("%d", root->data);
}

void printInorder(struct Node* root) {
    if (root == NULL) return;
    printInorder(root->left);
    printf("%d", root->data);
    printInorder(root->right);
}

int main() {
    struct Node* root = createTree(1);
    insertLeftRight(root, 2, 3);
    insertLeftRight(root->left, 4, 5);
    insertLeftRight(root->right, 6, 7);

    printf("\nPreorder:");
    printPreorder(root);

    printf("\nInorder:");
    printInorder(root);

    printf("\nPostorder:");
    printPostorder(root);

    return 0;
}