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
    struct Node *third = malloc(sizeof(*third));
    if (first == NULL || second == NULL || third == NULL)
    {
        perror("malloc failed!\n");
        return 1;
    }

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    for (struct Node *current = first; current != NULL; current = current->next)
    {
        printf("%d -> ", current->data);
    };
    printf("NULL");

    free(third);
    free(second);
    free(first);

    return 0;
}