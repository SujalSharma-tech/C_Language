#include <limits.h>
#include <stdio.h>

int main()
{
    // program to find row with maximum sum

    int res, rows, cols;
    int sum[rows];

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
        int sum2 = 0;

        for (int j = 0; j < cols; j++)
        {
            sum2 += mat[i][j];
        }
        sum[i] = sum2;
    }

    int max = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        if (max < sum[i])
        {
            res = i;
            max = sum[i];
        }
    }

    printf("The maximum sum is %d and row is %d\n", max, res);

    return 0;
}