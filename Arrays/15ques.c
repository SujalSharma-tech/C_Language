#include <stdio.h>

int main()
{
    // check if the given array is palidrome

    int arr[5] = {1, 2, 3, 2, 1};
    int size = 5;
    int flag = 1;
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] == arr[size - i - 1])
        {
            continue;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        printf("array is palidrome\n");
    }
    else
    {
        printf("not palidrome\n");
    }
    return 0;
}