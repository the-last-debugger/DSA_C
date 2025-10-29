#include <stdio.h>

#define N 5   // This is the maximum size of stack, no semicolon at the end
int stack[N]; // The stack itself
int top = -1; // points to the item on top. set to '-1' when stack is empty.

void push()
{
    int x;
    printf("Enter Data: ");
    scanf("%d", &x);

    if (top == N - 1)

        printf("Overflow! Cannot push %d \n", x);

    else
    {
        top++;
        stack[top] = x;
        printf("%d pushed successfully. \n", x);
    }
}

int main()
{
    int choice;
    do
    {
        printf("0. Exit \n");
        printf("1. Push \n");

        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("Exiting");
            break;

        case 1:
            push();
            break;

        default:
            printf("invalid choice");
        }
    } while (choice != 0);
    return 0;
}