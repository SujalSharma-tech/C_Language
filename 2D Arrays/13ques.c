#include <stdio.h>

int main()
{
    // wave printing of matrix

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

    for (int i = 0; i < rows; i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("%d ", mat[i][j]);
            }
        }
        else
        {
            for (int j = cols - 1; j >= 0; j--)
            {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}