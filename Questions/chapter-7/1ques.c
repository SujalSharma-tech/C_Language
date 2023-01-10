#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &arr[0];
    printf("%d\n", *ptr);
    ptr += 2;
    printf("%d", *ptr);
    return 0;
}