#include <stdlib.h>
#include <stdio.h>

struct VertexAdjListNode {
    struct Vertex * vertex;
    struct VertexAdjListNode * next;
};

typedef struct Vertex {
    int data;
    struct VertexAdjListNode * adjListHead;
} vertex_t;


typedef struct Graph {
    int numVertices;
    int numEdges;
    struct Vertex ** vertices;
} graph_t;


graph_t * createGraph() {
    graph_t * graph = (graph_t *) malloc(sizeof(graph_t));
    graph->numVertices = 0;
    graph->numEdges = 0;
    graph->vertices = (vertex_t **) malloc(sizeof(vertex_t) * 0);
    return graph;
}

struct VertexAdjListNode * _createVertexAdjListNode(vertex_t * vertex) {
    // Create a new node for the adjacency list of a vertex
    struct VertexAdjListNode * newNode = (struct VertexAdjListNode *) malloc(sizeof(struct VertexAdjListNode));
    // assign the vertex to the node
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;
}

vertex_t * addVertex(graph_t * graph, int data) {
    // Create a new vertex
    vertex_t * newVertex = (vertex_t *) malloc(sizeof(vertex_t));
    newVertex->data = data;
    newVertex->adjListHead = NULL;
    // Add the new vertex to the graph
    graph->vertices = (vertex_t **) realloc(graph->vertices, sizeof(vertex_t) * (graph->numVertices + 1));
    graph->vertices[graph->numVertices] = newVertex;
    graph->numVertices++;
    return (graph->vertices[graph->numVertices - 1]);
}

void addEdge(vertex_t * from, vertex_t * to) {
    // Create a node for vertex from's adjacency list
    struct VertexAdjListNode * newNode = _createVertexAdjListNode(to);
    // add newNode to the head of from's adjacency list
    newNode->next = from->adjListHead;
    // assign the new head of the adjacency list
    from->adjListHead = newNode;
}

void addUndirectedEdge(vertex_t * from, vertex_t * to) {
    addEdge(from, to);
    addEdge(to, from);
}


void printGraph(graph_t * graph) {
    for (int i = 0; i < graph->numVertices; i++) {
        printf("%d: ", graph->vertices[i]->data);
        struct VertexAdjListNode * curr = graph->vertices[i]->adjListHead;
        while (curr != NULL) {
            printf("%d ", curr->vertex->data);
            curr = curr->next;
        }
        printf("\n");
    }
}


int main() {
    graph_t * graph = createGraph();
    vertex_t * v0 = addVertex(graph, 0);
    vertex_t * v1 = addVertex(graph, 1);
    vertex_t * v2 = addVertex(graph, 2);
    vertex_t * v3 = addVertex(graph, 3);
    vertex_t * v4 = addVertex(graph, 4);
    addUndirectedEdge(v0, v1);
    addUndirectedEdge(v0, v2);
    addUndirectedEdge(v0, v3);
    addUndirectedEdge(v3, v4);
    printGraph(graph);
}

