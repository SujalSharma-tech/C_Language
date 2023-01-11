#include <stdio.h>

int main()
{

    // sum of elements in a given array

    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    printf("The sum of elements of array is %d\n", sum);
    return 0;
}