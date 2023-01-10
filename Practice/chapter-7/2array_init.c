#include <stdio.h>
#include <conio.h>

int main()
{
    // another way of initialization
    int arr[] = {1, 2, 3};

    printf("The value of a[0],a[1] and a[2] is %d, %d and %d\n", arr[0], arr[1], arr[2]);

    int marks[2] = {1, 2};
    printf("%d and %d\n", marks[0], marks[1]);

    return 0;
}