#include <stdio.h>
#define N 5
int top = -1;
int stack[N];

void display()
{

    int i;
    if (top == -1)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The items in the stack are :\n");
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}
void push()
{
    int x;
    printf("enter the element to be pushed: ");
    scanf("%d", &x);

    if (top == N - 1)
    {
        printf("stack is full overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("%d has been pushed\n", x);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("popped element %d\n", stack[top]);
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The element at the top is: %d\n", stack[top]);
    }
}

int main()
{
    int choice;
    do
    {
        printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        printf("enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            printf("invalid choice");
        }
    } while (choice != 5);
    return 0;
}