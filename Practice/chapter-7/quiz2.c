#include <stdio.h>
#include <conio.h>
void printarr(int *ptr, int n, int m)
{

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("%d", *(ptr + i + j) + i);
    //     }
    //     printf("\n");
    // }

    // another method

    for (int i = 1; i <= 6; i++)
    {
        printf("%d", *(ptr + (i - 1)));
        if (i % m == 0)
        {
            printf("\n");
        }
    }
}
int main()
{
    int rows = 3;
    int cols = 2;

    int arr[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            printf("Enter value of row %d and col %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printarr(*arr, 3, 2);

    return 0;
}