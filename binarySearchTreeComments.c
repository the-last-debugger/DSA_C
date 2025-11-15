#include <stdio.h> // Standard Input Output library for printf

// Definition of a node in a Binary Search Tree (BST)
struct Node
{
    int data;           // Data part of the node, stores an integer value
    struct Node *left;  // Pointer to the left child node
    struct Node *right; // Pointer to the right child node
};

// Function to search for a value 'x' in the BST
struct Node *searchBST(struct Node *root, int x)
{
    if (root == NULL) // If the tree/subtree is empty
        return NULL;  // Value not found, return NULL

    if (root->data == x) // If current node contains the value
        return root;     // Return pointer to this node

    if (x < root->data)                  // If value is smaller than current node's data
        return searchBST(root->left, x); // Search in the left subtree
    else
        return searchBST(root->right, x); // Search in the right subtree
};

// Main function - program execution starts here
int main()
{
    // Creating individual nodes of BST manually
    struct Node n1 = {10, NULL, NULL}; // Root node with value 10
    struct Node n2 = {5, NULL, NULL};  // Left child node with value 5
    struct Node n3 = {15, NULL, NULL}; // Right child node with value 15

    // Linking nodes to form the BST
    n1.left = &n2;  // Root's left child points to n2
    n1.right = &n3; // Root's right child points to n3

    int key = 5; // Value to search in BST

    // Call the search function and store the result
    struct Node *result = searchBST(&n1, key);

    // Check if the value was found and display appropriate message
    if (result)
        printf("Success! %d found in BST", key); // Node found
    else
        printf("Failed! %d not found in BST", key); // Node not found

    return 0; // Program ends successfully
}
