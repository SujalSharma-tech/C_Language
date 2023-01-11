#include <stdio.h>
// #include <limits.h>

int main()
{
    // find the maximum element in an array

    int arr[8] = {45, 64, 24, 98, 34, 82, 67};

    int max = arr[0];
    // or max = INT_MIN; library: limits.h

    for (int i = 1; i < 8; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The max element in the array is %d\n", max);

    return 0;
}