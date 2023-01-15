#include <stdio.h>

int main()
{
    // program to print spiral matrix

    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of matrix: \n");

    int mat[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int minr, minc, maxr, maxc, me, count;
    count = 0;
    me = rows * cols;
    minc = 0;
    maxc = cols - 1;
    minr = 0;
    maxr = rows - 1;

    while (count < me)
    {

        for (int j = minc; j <= maxc; j++)
        {
            printf("%d ", mat[minr][j]);
            count++;
        }
        minr++;
        if (count >= me)
            break;

        for (int i = minr; i <= maxr; i++)
        {
            printf("%d ", mat[i][maxc]);
            count++;
        }
        maxc--;
        if (count >= me)
            break;

        for (int j = maxc; j >= minc; j--)
        {
            printf("%d ", mat[maxr][j]);
            count++;
        }
        maxr--;
        if (count >= me)
            break;

        for (int i = maxr; i >= minr; i--)
        {
            printf("%d ", mat[i][minc]);
            count++;
        }
        minc++;
        if (count >= me)
            break;
    }
    return 0;
}