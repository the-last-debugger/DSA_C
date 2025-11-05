#include <stdio.h>

int arr[7] = {
    12,
    45,
    3,
    89,
    22,
    7,
    56};

int main()
{
    int i = 0;
    int max = arr[0];
    int min = arr[0];

    while (i < 7)
    {
        int temp = arr[i];

        if (temp > max)
        {
            max = temp;
        }

        if (temp < min)
        {
            min = temp;
        }

        i++;
    }

    printf("max: %d \n", max);
    printf("min: %d \n", min);

    return 0;
}
