# Graphs

In computer programming, graphs can be represented using a data structure known as an "adjacency list". An adjacency list is a collection of linked lists, where each linked list represents the set of vertices adjacent to a particular vertex in the graph.

This code uses an array of linked lists to represent the graph, with each element of the array representing a vertex in the graph. The addEdge() function adds an edge between two vertices by adding a new node to the linked list corresponding to the first vertex. The printGraph() function prints out the adjacency list for each vertex in the graph.

To use this code, you would first input the number of vertices n and the number of edges m. Then, you would input m pairs of vertices representing the edges of the graph. The output would be the adjacency list for each vertex in the graph.

Note that this implementation assumes an undirected graph, so it adds edges in both directions. If you want to represent a directed graph, you can remove the second addEdge() call in the input loop.

The BFS() function performs a breadth-first traversal of the graph starting at the specified start vertex. It uses a queue to keep track of vertices to visit next and a visited array to mark which vertices have already been visited. The function prints out the visited vertices in the order they were visited.

The DFS() function performs a depth-first traversal of the graph starting at the specified start vertex. It uses a visited array to mark which vertices have already been visited. The function prints out the visited vertices in the order they were visited. Note that the visited array should be initialized to all zeros before calling this function.
