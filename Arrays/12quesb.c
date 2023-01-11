#include <stdio.h>
#include <limits.h>
int main()
{
    // find second largest in array
    // using max element

    int arr[8] = {13, 54, 33, 66, 34, 87, 11, 32};
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }

    printf("the second largest element in the array is %d\n", smax);
    return 0;
}