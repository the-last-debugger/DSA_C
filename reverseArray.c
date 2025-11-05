#include <stdio.h>

int arr[5] = {23, 56, 78, 90, 5};

int main()
{
    int start = 0, end = 4;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = arr[start];

        start++;
        end--;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}