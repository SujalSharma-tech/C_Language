#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n = 9;
    int arr[10] = {9, 3, 6, 2, 7, 1, 4, 10, 5, 8};

    for (int i = 0; i < 9; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - i; j++)
        {

            if (arr[j] > arr[j + 1])
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

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}