#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *first = (struct Node *)malloc(sizeof(*first));
    struct Node *second = (struct Node *)malloc(sizeof(*second));
    if (first == NULL || second == NULL)
    {
        perror("malloc failed!");
        return 1;
    }

    first->data = 10;
    second->data = 20;

    first->next = second;
    second->next = NULL;

    printf("Data on first Node: %d \n", first->data);
    printf("Data on second Node: %d \n", first->next->data);

    return 0;
}
