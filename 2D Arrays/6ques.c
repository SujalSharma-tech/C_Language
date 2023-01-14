#include <stdio.h>

int main()
{
    // program to find sum between given coordinates

    int sum, l1, r1, l2, r2, rows, cols;

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

    printf("Enter starting coordinates l1 and r1: ");
    scanf("%d %d", &l1, &r1);
    printf("Enter ending coordinates l2 and r2: ");
    scanf("%d %d", &l2, &r2);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i >= l1 && i <= l2)
            {
                if (j >= r1 && j <= r2)
                {
                    sum += mat[i][j];
                }
            }
        }
    }
    printf("The sum between the given coordinates is %d\n", sum);
    return 0;
}