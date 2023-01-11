#include <stdio.h>
#include <limits.h>

int main()
{
    // second largest number in array using single loop
    // best way

    int arr[8] = {1, 2, 3, 4, 4, 2, 1, 2};
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        if (smax < arr[i] && arr[i] != max)
        {
            smax = arr[i];
        }
    }

    printf("The second largest element is %d\n", smax);
    return 0;
}