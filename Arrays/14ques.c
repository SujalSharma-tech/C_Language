#include <stdio.h>

int main()
{
    // program to reverse an array without another array

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[7 - i];
        arr[7 - i] = temp;
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}