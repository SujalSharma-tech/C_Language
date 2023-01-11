#include <stdio.h>

int main()
{
    // find triplets whose sum is equal to x
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            for (int k = j + 1; k < 8; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    count++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("Total number of triplets are : %d\n", count);

    return 0;
}