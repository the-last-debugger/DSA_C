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

        printf("Overflow! Cannot push %d", &x);

    else
    {
        top++;
        stack[top] = x;
    }
}

int main()
{
    int choice;
    do
    {
        printf("Enter choice: 1. Push: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;

        default:
            printf("invalid choice");
        }
    } while (choice != 0);
    return 0;
}