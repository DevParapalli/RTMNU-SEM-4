#include <stdio.h>
#include <stdlib.h>

struct AdjacencyListNode {
    int vertex;
    struct AdjacencyListNode *next;
};

struct AdjacencyList {
    struct AdjacencyListNode *head;
};

struct Graph {
    int vertices;
    struct AdjacencyList *array;
};

struct AdjacencyListNode *createAdjacencyListNode(int dest) {
    struct AdjacencyListNode *newNode = (struct AdjacencyListNode *)malloc(sizeof(struct AdjacencyListNode));
    newNode->vertex = dest;
    newNode->next = NULL;
    return newNode;
}

struct Graph *createGraph(int vertices) {
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->vertices = vertices;
    graph->array = (struct AdjacencyList *)malloc(vertices * sizeof(struct AdjacencyList));
    for (int i = 0; i < vertices; i++) {
        graph->array[i].head = NULL;
    }
    return graph;
}

void addEdge(struct Graph * graph, int src, int dest) {
    struct AdjacencyListNode *check = NULL;
    struct AdjacencyListNode *newNode = createAdjacencyListNode(dest);

    if (graph ->array[src].head == NULL) {
        newNode->next = graph->array[src].head;
        graph->array[src].head = newNode;
    }
    else {
        check = graph->array[src].head;
        while(check->next != NULL) {
            check = check->next;
        }
        check->next = newNode;
    }

    // If directed, comment this line
    addEdge(graph, dest, src);
}

void printGraph(struct Graph *graph) {
    for (int i = 0; i < graph->vertices; i++) {
        struct AdjacencyListNode *check = graph->array[i].head;
        printf("Adjacency list of vertex %d\n", i);
        while(check != NULL) {
            printf("%d -> ", check->vertex);
            check = check->next;
        }
        printf("\n");
    }
}

int main() {
    int vertices = 5;
    struct Graph *graph = createGraph(vertices);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    printGraph(graph);
    return 0;
}