#include <stdio.h>
#include <conio.h>

void arr_rev(int *ptr, int n)
{

    ptr += n - 1;
    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        arr2[i] = *(ptr);
        ptr--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
}
int main()
{
    int arr[] = {12, 24, 45, 23, 46};
    int *ptr = &arr[0];
    ptr += 5;
    arr_rev(arr, 5);
    return 0;
}