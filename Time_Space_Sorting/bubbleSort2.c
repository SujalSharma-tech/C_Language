#include <stdio.h>
#include <stdbool.h>
int main()
{
    // bubble sort to sort in descending order

    int arr[10] = {9, 3, 6, 2, 7, 1, 4, 10, 5, 8};
    int n = 10;
    for (int i = 0; i < n - 1; i++)
    {

        bool flag = true;

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}