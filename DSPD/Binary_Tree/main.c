#include <stdio.h>
#include <stdlib.h>
#define COUNT 10

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node* createTree(int data) {
    struct Node* root = createNode(data);
    return root;
}

void _printTree(struct Node* root, int space) {
    if (root == NULL) {
        return;
    }

}

void printTree(struct Node* root) {
    if (root == NULL) {
        return;
    }
    _printTree(root, 0);
}

void insertLeft(struct Node* root, int data) {
    struct Node* newNode = createNode(data);
    root->left = newNode;
}

void insertRight(struct Node* root, int data) {
    struct Node* newNode = createNode(data);
    root->right = newNode;
}

int main() {
    struct Node* root = createTree(1);
    insertLeft(root, 2);
    insertRight(root, 3);
    insertLeft(root->left, 4);
    insertRight(root->left, 5);
    insertLeft(root->right, 6);
    insertRight(root->right, 7);
    printTree(root);
    return 0;
}