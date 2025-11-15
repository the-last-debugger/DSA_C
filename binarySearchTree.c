#include <stdio.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *searchBST(struct Node *root, int x)
{
    if (root == NULL)
        return NULL;

    if (root->data == x)
        return root;

    if (x < root->data)
        return searchBST(root->left, x);

    else
        return searchBST(root->right, x);
};

int main()
{
    struct Node n1 =
        {
            10,
            NULL,
            NULL};

    struct Node n2 =
        {
            5,
            NULL,
            NULL};

    struct Node n3 =
        {
            15,
            NULL,
            NULL};
    n1.left = &n2;
    n1.right = &n3;

    int key = 5;

    struct Node *result = searchBST(&n1, key);
    if (result)
        printf("Success! %d found in BST", key);
    else
        printf("Failed! %d not found in BST", key);

    return 0;
}