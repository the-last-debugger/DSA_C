#include <stdio.h>
#include <stdbool.h>

int arr[12] = {5, 7, 5, 2, 9, 5, 1, 5, 3, 9, 5, 4};

void isFound(int key)
{
    int temp, count = 0;
    bool found = false;

    for (int i = 0; i < 12; i++)
    {
        int temp = arr[i];
        if (temp == key)
        {
            found = true;
            count++;
        }
    }
    if (found)
        printf("%d appears %d times \n", key, count);
    else
        printf("%d not found \n", key);
}

int main()

{
    isFound(5);
    isFound(50);
    return 0;
}