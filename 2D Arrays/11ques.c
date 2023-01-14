#include <stdio.h>

int main()
{
    // rotate matrix by 90 degree

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
        for (int j = i; j < cols; j++)
        {

            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    printf("\n");

    for (int i = 0; i < rows; i++)
    {
        int k = 0;
        for (int j = 0; j < cols / 2; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[i][cols - 1 - k];
            mat[i][cols - 1 - k] = temp;
            k++;
        }
    }

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}