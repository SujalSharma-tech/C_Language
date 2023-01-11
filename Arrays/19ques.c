#include <stdio.h>
#include <stdbool.h>

int main()
{
    // return the value which is unique

    int arr[10] = {1, 5, 3, 2, 1, 5, 3, 5, 10, 5};
    for (int i = 0; i < 10; i++)
    {
        bool flag = false;
        for (int j = 0; j < 10; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("%d is unique\n", arr[i]);
        }
    }

    return 0;
}