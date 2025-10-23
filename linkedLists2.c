#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *first = malloc(sizeof(*first));
    struct Node *second = malloc(sizeof(*second));
    if (first == NULL || second == NULL)
    {
        perror("malloc failed!");
        return 1;
    };

    first->data = 10;
    second->data = 20;

    first->next = second;
    second->next = NULL;

    printf("First node data: %d\n", first->data);
    printf("Second node data(via link): %d\n", first->next->data);

    free(second);
    free(first);

    return 0;
}