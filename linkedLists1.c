#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        perror("malloc failed");
        return 1;
    }
    n->data = 42;
    n->next = NULL;

    printf("Address of node: %p\n", (void *)n);
    printf("Address of data: %p\n", &n->data);
    printf("Address of next: %p\n", (void *)&n->next);

    printf("Node data: %d\n", n->data);
    free(n);

    return 0;
}