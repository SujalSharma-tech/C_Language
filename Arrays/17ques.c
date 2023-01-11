#include <stdio.h>

int main()
{
    // find missing element in array
    int sum = 0, n = 10;
    int arr[9] = {1, 3, 2, 9, 6, 5, 4, 7, 8};
    int sum2 = (n * (n + 1)) / 2;

    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    printf("The missing element is %d\n", sum2 - sum);

    return 0;
}