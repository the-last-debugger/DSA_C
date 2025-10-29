#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printlist(struct Node *head)
{
    for (struct Node *current = head; current != NULL; current = current->next)
    {
        printf("%d -> ", current->data);
    }
    printf("NULL");
}

void appendNode(struct Node *tail)
{
}

int main()
{
    struct Node *first = malloc(sizeof(*first));
    struct Node *second = malloc(sizeof(*second));
    struct Node *third = malloc(sizeof(*third));
    if (first == NULL || second == NULL || third == NULL)
    {
        printf("malloc failed!");
        return 1;
    }

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    printlist(first);

    free(third);
    free(second);
    free(first);

    return 0;
}