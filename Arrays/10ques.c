#include <stdio.h>

int main()
{
    // total pairs whose sum is x

    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int pairs = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                pairs++;
            }
        }
    }
    printf("total number of pairs are : %d\n", pairs);
    return 0;
}