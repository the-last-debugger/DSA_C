#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *n = (struct Node *)malloc(sizeof(*n));
    if (n == NULL)
    {
        perror("malloc failed");
        return 1;
    }
    n->data = 60;
    n->next = NULL;

    printf("Data in node: %d", n->data);
    printf("Data in node 2: %d", n->next);

    free(n);

    return 0;
}