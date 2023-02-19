#include <stdio.h>

int main()
{
    // 2 pointer approach to find sum of two numbers to target sorted array

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int target = 8;
    int m, n;
    m = 0;
    n = 9;

    while (m < n)
    {
        if (arr[m] + arr[n] == target)
        {
            printf("%d %d\n", arr[m], arr[n]);
            n--;
            m++;
        }
        else if (arr[m] + arr[n] > target)
        {
            n--;
        }
        else if (arr[m] + arr[n] < target)
        {
            m++;
        }
    }

    return 0;
}