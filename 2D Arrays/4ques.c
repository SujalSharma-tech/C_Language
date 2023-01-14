#include <stdio.h>

int main()
{

    // find sum of all elements in an array

    int sum = 0;

    int arr[2][2] = {{1, 2}, {3, 4}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("Sum of elements is %d\n", sum);
    return 0;
}