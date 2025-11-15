#include <stdio.h>

int arr[8] = {4, 17, 22, 9, 13, 6, 30, 11};

int main()
{
    int i = 0;
    int temp;
    int evenCount = 0;
    int oddCount = 0;

    while (i < 8)
    {
        temp = arr[i];
        if (temp % 2 == 0)
        {
            evenCount++;
        }
        else
            oddCount++;

        i++;
    };

    printf("Even count: %d \n", evenCount);
    printf("Odd Count: %d \n", oddCount);

    return 0;
}