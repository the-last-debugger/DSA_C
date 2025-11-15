#include <stdio.h>  // Standard Input Output library for functions like printf and scanf
#include <stdlib.h> // Standard library for functions like malloc and free

int n; // Global variable to store the number of nodes in the linked list

// Definition of a node in the linked list
struct Node
{
    int data;          // Data part of the node, stores an integer value
    struct Node *next; // Pointer to the next node in the linked list
};

// Function to create a linked list
struct Node *createLinkedList()
{
    struct Node *head = NULL; // Pointer to the first node of the linked list, initially empty
    struct Node *temp = NULL; // Temporary pointer used to traverse and build the list

    // Ask the user how many nodes they want
    printf("Enter number of desired nodes: ");
    scanf("%d", &n);

    printf("Creating linked list of %d... \n", n);

    // Loop to create 'n' nodes
    for (int i = 0; i < n; i++)
    {
        // Allocate memory for a new node dynamically
        struct Node *newNode = (struct Node *)malloc(sizeof(*newNode));

        // Prompt user to enter data for the new node
        printf("\n Enter value at node %d: ", i + 1);
        scanf("%d", &newNode->data);

        printf("\n %d was inserted successfully! \n", newNode->data);

        // Initially, the new node points to NULL (end of the list)
        newNode->next = NULL;

        // If this is the first node, set head to this node
        if (head == NULL)
        {
            head = newNode; // Head now points to the first node
            temp = head;    // Temp is also set to head to help build the list
        }
        else
        {
            // For subsequent nodes, link the previous node to the new node
            temp->next = newNode;
            temp = newNode; // Move temp to the last node
        }
    }

    return head; // Return the pointer to the first node of the list
}

// Function to display the linked list
void display(struct Node *head)
{
    struct Node *temp = head; // Temporary pointer to traverse the list

    // Traverse the linked list until the end (NULL)
    while (temp != NULL)
    {
        printf("%d -> ", temp->data); // Print the data of each node
        temp = temp->next;            // Move to the next node
    }

    printf("NULL \n"); // End of linked list
}

// Main function - program execution starts here
int main()
{
    struct Node *head = createLinkedList(); // Create the initial linked list

    int choice; // Variable to store user's menu choice

    // Loop to provide a simple menu-driven interface
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
            head = createLinkedList(); // Create a new linked list (overwrites previous one)
            break;

        case 2:
            display(head); // Display the current linked list
            break;

        case 0:
            return 0; // Exit the program

        default:
            printf("\n invalid choice! \n"); // Handle invalid menu input
            break;
        }
    } while (choice != 0); // Continue menu loop until user chooses to exit

    return 0; // Return 0 to indicate successful program termination
}
