# DSPD Practical 08

Binary Trees:

A binary tree is a data structure that consists of nodes connected by edges. Each node in a binary tree has at most two children, known as left and right children. The topmost node of the tree is called the root node.

Traversal:

Traversal is the process of visiting each node in a tree exactly once. There are three ways to traverse a binary tree:

1. Inorder Traversal:

In an inorder traversal, we first visit the left subtree, then the root node, and finally the right subtree. This means that we visit the nodes in ascending order of their values in a binary search tree. The inorder traversal can be used to print out the values of the nodes in sorted order.

1. Preorder Traversal:

In a preorder traversal, we first visit the root node, then the left subtree, and finally the right subtree. Preorder traversal is often used to create a copy of the tree or to evaluate expressions in a parse tree.

1. Postorder Traversal:

In a postorder traversal, we first visit the left subtree, then the right subtree, and finally the root node. Postorder traversal is often used to delete a tree or to free the memory allocated for a tree.

Example:

Let's consider the following binary tree:

```text
        1
       / \
      2   3
     / \
    4   5
```

- Inorder traversal: 4 2 5 1 3
- Preorder traversal: 1 2 4 5 3
- Postorder traversal: 4 5 2 3 1

Note that the order of traversal affects the order in which the nodes are visited
