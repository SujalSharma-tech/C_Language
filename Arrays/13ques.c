#include <stdio.h>

int main()
{
    int arr[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int c_arr[8];

    for (int i = 0; i < 8; i++)
    {
        c_arr[i] = arr[7 - i];
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", c_arr[i]);
    }
    return 0;
}