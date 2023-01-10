#include <stdio.h>
#include <conio.h>
void table(int *arr, int n)
{

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int arr[3][10];

    table(arr[0], 2);
    table(arr[1], 3);
    table(arr[2], 7);

    return 0;
}