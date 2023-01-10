#include <stdio.h>
#include <conio.h>
void Printarr(int *ptr, int n);
int main()
{

    int arr[] = {2, 45, 23, 345, 65};
    Printarr(arr, 5);

    return 0;
}

void Printarr(int *ptr, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("the value of %d element is %d \n", i + 1, *(ptr + i));
    }
}