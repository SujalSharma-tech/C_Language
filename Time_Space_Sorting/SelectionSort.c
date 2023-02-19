#include <stdio.h>
#include <limits.h>

int main()
{

    // Selection sort

    int arr[10] = {9, 3, 6, 2, 7, 1, 4, 10, 5, 8};

    for (int i = 0; i < 10; i++)
    {
        int Min = INT_MAX;
        int ind = 0;
        for (int j = i; j < 10; j++)
        {
            if (arr[j] < Min)
            {
                Min = arr[j];
                ind = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[ind];
        arr[ind] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}