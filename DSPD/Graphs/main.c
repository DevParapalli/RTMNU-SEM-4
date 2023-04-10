#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

typedef struct node {
    int vertex;
    struct node *next;
} node;

node* createNode(int v) {
    node* newNode = malloc(sizeof(node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

void addEdge(node** graph, int u, int v) {
    // add an edge between vertices u and v
    node* newNode = createNode(v);
    newNode->next = graph[u];
    graph[u] = newNode;
}

void printGraph(node** graph, int n) {
    for (int i = 0; i < n; i++) {
        printf("Adjacency list for vertex %d: ", i);
        node* currentNode = graph[i];
        while (currentNode != NULL) {
            printf("%d -> ", currentNode->vertex);
            currentNode = currentNode->next;
        }
        printf("NULL\n");
    }
}

void BFS(node** graph, int n, int start) {
    int visited[MAX_VERTICES] = {0};
    int queue[MAX_VERTICES];
    int front = 0, rear = -1;
    queue[++rear] = start;
    visited[start] = 1;
    while (front <= rear) {
        int u = queue[front++];
        printf("%d ", u);
        node* currentNode = graph[u];
        while (currentNode != NULL) {
            int v = currentNode->vertex;
            if (!visited[v]) {
                visited[v] = 1;
                queue[++rear] = v;
                printf("%d ", v); // visit the node lmao
            }
            currentNode = currentNode->next;
        }
    }
    printf("\n");
}

void DFS(node** graph, int n, int start, int visited[]) {
    visited[start] = 1;
    printf("%d ", start);
    node* currentNode = graph[start];
    while (currentNode != NULL) {
        int v = currentNode->vertex;
        if (!visited[v]) {
            DFS(graph, n, v, visited);
            printf("%d ", v); // visit the node lmao
        }
        currentNode = currentNode->next;
    }
} 

int main() {
    node* graph[MAX_VERTICES];
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        graph[i] = NULL;
    }
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(graph, u, v);
        addEdge(graph, v, u); // comment this out for directed graphs
    }
    printGraph(graph, n);
    return 0;
}