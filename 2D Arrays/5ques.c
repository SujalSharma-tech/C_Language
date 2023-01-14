#include <stdio.h>
#include <limits.h>

int main()
{
    // find the maximum and minimum element in a 2D array

    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of cols: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int min = INT_MAX;
    int r, c;
    int max = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < min)
            {

                min = arr[i][j];
            }
            if (arr[i][j] > max)
            {
                r = i + 1;
                c = j + 1;
                max = arr[i][j];
            }
        }
    }

    int arr2[2] = {r, c};

    printf("The maximum element in the array is %d and index is (%d,%d)\n", max, arr2[0], arr2[1]);
    ;
    printf("The minimum element in the array is %d\n", min);

    return 0;
}