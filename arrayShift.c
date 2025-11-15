#include <stdio.h>

int arr[5] = {1, 2, 3, 4, 5};

void shiftLeft(int range)
{
    int n = 5;
    int temp[5];

    for (int i = 0; i < n; i++)
    {
        int newPos = (i - range + n) % n;
        temp[newPos] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    printf("Array after shifting left by %d: {", range);
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            printf("%d", arr[i]);
        else
            printf("%d, ", arr[i]);
    }
    printf("} \n");
}

int main()
{
    printf("Array before shifting: {");
    for (int i = 0; i < 5; i++)
    {
        if (i == 5 - 1)
            printf("%d", arr[i]);
        else
            printf("%d, ", arr[i]);
    }
    printf("}\n");

    shiftLeft(2);

    return 0;
}
