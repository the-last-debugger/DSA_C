#include <stdio.h>
#include <stdbool.h>

int arr[9] = {6, 18, 91, 4, 33, 11, 27, 50, 13};

void isFound(int key)
{
    int i = 0;
    int temp;
    int position;
    bool found = false;

    while (i < 9)
    {
        temp = arr[i];

        if (temp == key)
        {
            position = i;
            found = true;
        }
        i++;
    }
    if (found)
        printf("Element found at position %d \n", position);
    else
        printf("ELement not found \n");
};

int main()
{
    isFound(33);
    isFound(20);

    return 0;
}