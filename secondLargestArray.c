#include <stdio.h>

int arr[10] = {
    14, 7, 22, 5, 89, 41, 89, 3, 19, 10};

int main()
{
    int i = 0;
    int min = arr[0];
    int max = arr[0];
    int secLargest = arr[0] - 1;
    int temp;

    while (i < 10)
    {
        temp = arr[i];

        if (temp > max)
        {
            secLargest = max;
            max = temp;
        }
        else if (temp > secLargest && temp < max)
        {
            secLargest = temp;
        }
        else if (temp < min)

            min = temp;

        i++;
    }
    printf("Second largest no: %d \n", secLargest);
    printf("min: %d \n", min);
    printf("max: %d \n", max);

    return 0;
}