#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; 
    struct Node *next;
};

struct Node *createNode(int data) {
    struct Node *node = (struct Node *) malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

struct Node *createList(int data) {
    struct Node *head = createNode(data);
    return head;
}

void printList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d\t", current->data);
        current = current->next;
    }
    printf("\n");
}

void insertAtHead(struct Node **head, int data) {
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtTail(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    struct Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void insertAtPosition(struct Node *head, int data, int position) {
    struct Node *newNode = createNode(data);
    struct Node *current = head;
    int i = 0;
    while (i < position - 1) {
        current = current->next;
        i++;
    }
    newNode->next = current->next;
    current->next = newNode;
}

void deleteAtHead(struct Node **head) {
    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}



void deleteAtTail(struct Node *head) {
    struct Node *current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    struct Node *temp = current->next;
    current->next = NULL;
    free(temp);
}

void deleteAtPosition(struct Node *head, int position) {
    struct Node *current = head;
    int i = 0;
    while (i < position - 1) {
        current = current->next;
        i++;
    }
    struct Node *temp = current->next;
    current->next = current->next->next;
    free(temp);
}

int main(int argc, char * argv[]) {
    struct Node *head = createList(1);
    insertAtHead(&head, 0);
    insertAtTail(head, 2);
    insertAtPosition(head, 3, 1);
    printList(head);
    deleteAtHead(&head);
    deleteAtTail(head);
    deleteAtPosition(head, 1);
    printList(head);
    return 0;
}