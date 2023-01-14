#include <stdio.h>

int main()
{

    // program to add 2 matrices

    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr1[rows][cols];
    int arr2[rows][cols];

    printf("Enter elements of first matrix\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n");

    printf("Enter elements of second matrix\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n");

    printf("The sum of matrices is: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}