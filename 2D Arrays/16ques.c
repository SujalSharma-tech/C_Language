#include <stdio.h>

int main()
{

    // program to print spiral matrix from 1 to n**2

    int n;

    printf("Enter number of rows and columns or n: ");
    scanf("%d", &n);

    int arr[n][n];

    int minr, maxr, minc, maxc, count;
    minc = 0;
    count = 1;
    minr = 0;
    maxr = n - 1;
    maxc = n - 1;
    int te = n * n;

    while (count <= te)
    {

        for (int i = minc; i <= maxc; i++)
        {
            arr[minr][i] = count;
            count++;
        }
        minr++;
        if (count > te)
            break;

        for (int i = minr; i <= maxr; i++)
        {
            arr[i][maxc] = count;
            count++;
        }
        maxc--;
        if (count > te)
            break;

        for (int i = maxc; i >= minc; i--)
        {
            arr[maxr][i] = count;
            count++;
        }
        maxr--;
        if (count > te)
            break;

        for (int i = maxr; i >= minr; i--)
        {
            arr[i][minc] = count;
            count++;
        }
        minc++;
        if (count > te)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}