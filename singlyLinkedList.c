#include <stdio.h>
#include <stdlib.h>

int n;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createLinkedList()
{
    struct Node *head = NULL;
    struct Node *temp = NULL;

    printf("Enter number of desired nodes: ");
    scanf("%d", &n);
    printf("Creating linked list of %d... \n", n);

    for (int i = 0; i < n; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(*newNode));

        printf("\n Enter value at node %d: ", i + 1);
        scanf("%d", &newNode->data);
        printf("\n %d was inserted successfuly! \n", newNode->data);

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
}

void display(struct Node *head)
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
    struct Node *head = createLinkedList();

    int choice;
    do
    {
        printf("\n---Menu select---\n");
        printf("1. Create linked list, 2. Display linked list, 0. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            head = createLinkedList();

            break;
        case 2:
            display(head);
            break;
        case 0:
            return 0;

        default:
            printf("\n invalid choice! \n");
            break;
        }
    } while (choice != 0);

    return 0;
}
