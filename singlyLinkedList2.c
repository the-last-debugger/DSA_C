#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createList(int n)
{
    struct Node *head = NULL;
    struct Node *temp = NULL;

    for (int i = 0; i < n; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(*newNode));

        printf("Enter value at Node %d: ", i + 1);
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    return head;
};

void displayList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL \n");
}

int main()
{
    struct Node *head = createList(5);
    displayList(head);
    return 0;
}