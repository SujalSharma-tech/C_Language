#include <stdio.h>
#include <conio.h>

int main()
{

    int arr[3][10];

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            for (int j = 1; j <= 10; j++)
            {
                arr[i][j] = 2 * j;
            }
        }
        if (i == 1)
        {
            for (int j = 1; j <= 10; j++)
            {
                arr[i][j] = 3 * j;
            }
        }
        if (i == 2)
        {
            for (int j = 1; j <= 10; j++)
            {
                arr[i][j] = 7 * j;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            for (int j = 1; j <= 10; j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        if (i == 1)
        {
            for (int j = 1; j <= 10; j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        if (i == 2)
        {
            for (int j = 1; j <= 10; j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}