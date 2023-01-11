#include <stdio.h>
#include <limits.h>
int main()
{
    // find the min value using limits lib
    int min = INT_MAX;
    int arr[8] = {45, 64, 2, 98, 34, 82, 67, 4};

    for (int i = 1; i < 8; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("THe minimum element in the arrays is %d\n", min);

    return 0;
}