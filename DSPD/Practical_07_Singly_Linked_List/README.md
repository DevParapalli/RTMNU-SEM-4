# DSPD Practical 07

A linked list is a data structure that consists of a sequence of nodes, where each node stores a value and a reference (or a pointer) to the next node in the sequence.

Linked lists are a fundamental data structure in computer science. There are several types of linked lists, each with its own characteristics and variations.

1. Singly Linked List: In a singly linked list, each node contains a data element and a reference (or pointer) to the next node in the list. It forms a unidirectional sequence where the traversal is possible only in one direction (forward).

2. Doubly Linked List: A doubly linked list is similar to a singly linked list, but each node has two pointers: one to the next node and another to the previous node. This allows for traversal in both directions (forward and backward).

3. Circular Linked List: In a circular linked list, the last node's pointer points back to the first node, forming a circular structure. It can be either a singly linked list or a doubly linked list.

The first node in the sequence is called the head, and the last node is called the tail. The tail node's reference to the next node is usually null or a sentinel value to indicate the end of the list.

Linked lists are often used to implement other data structures, such as stacks and queues, and as a building block for more complex data structures like graphs and trees.

### Algorithm for Traversal

1. Start at the head of the linked list.
2. While the current node is not `NULL`:
   - Process the data or perform any desired operations on the current node.
   - Move to the next node by updating the current node to its next node.
3. Repeat step 2 until the current node becomes `NULL`, indicating the end of the linked list.
