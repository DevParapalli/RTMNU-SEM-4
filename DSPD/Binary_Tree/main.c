#include <stdio.h>
#include <stdlib.h>
#define COUNT 10

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

void insertBoth(struct Node* root, int dataLeft, int dataRight) {
    insertLeft(root, dataLeft);
    insertRight(root, dataRight);
}

long int sumOfNodes(struct Node* root) {
    if (root == NULL) {
        return 0;
    }
    // Preorder Traversal
    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
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

int treeHeight(struct Node* root) {
    if (root == NULL) return 0;
    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);
    if (leftHeight > rightHeight) {
        return leftHeight + 1;
    } else {
        return rightHeight + 1;
    }
}

void printGivenLevel(struct Node* root, int level) {
    if (root == NULL) return;
    if (level == 1) {
        printf("%d\t", root->data);
    } else if (level > 1) {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}

void printLevelOrder(struct Node* root) {
    int height = treeHeight(root);
    for (int i = 1; i <= height; i++) {
        printf("\n");
        printGivenLevel(root, i);
    }
}

void prettyPrint(struct Node* root, int space) {
    if (root == NULL) return;
    space += COUNT;
    prettyPrint(root->right, space);
    printf("\n");
    for (int i = COUNT; i < space; i++) {
        printf(" ");
    }
    printf("%d\n", root->data);
    prettyPrint(root->left, space);
}

int main() {
    struct Node* root = createTree(1);
    insertLeft(root, 2);
    insertRight(root, 3);
    insertLeft(root->left, 4);
    insertRight(root->left, 5);
    insertLeft(root->right, 6);
    insertRight(root->right, 7);
    printLevelOrder(root);
    printf("\n");
    prettyPrint(root, 0);
    printf("\n");
    printf("Sum of all nodes in tree is : %d\n", sumOfNodes(root));
    return 0;
}