#include <stdio.h>

int main()
{
    // program to multiply two matricies

    int rows, cols, rows2, cols2;

    printf("Select dimensions and elements for first matrux: \n");

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of matrix 1: \n");

    int mat[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");

    printf("Select dimensions and elements for second matrux: \n");

    printf("Enter number of rows: ");
    scanf("%d", &rows2);
    printf("Enter number of columns: ");
    scanf("%d", &cols2);
    if (rows != cols2)
    {
        printf("These matrices cannot be multiplied");
        return 0;
    }

    printf("Enter elements of matrix 2: \n");

    int mat2[rows2][cols2];
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\n");

    int res[rows][cols2];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            int sum = 0;
            for (int k = 0; k < rows2; k++)
            {
                sum += mat[i][k] * mat2[k][j];
            }

            res[i][j] = sum;
        }
    }

    printf("The multiplied matrix is: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}