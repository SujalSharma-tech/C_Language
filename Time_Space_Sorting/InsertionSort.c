#include <stdio.h>

int main()
{

    int arr[10] = {9, 3, 6, 2, 7, 1, 4, 10, 5, 8};
    for (int i = 1; i < 10; i++)
    {

        int j = i;
        while (arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}