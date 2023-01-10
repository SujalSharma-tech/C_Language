#include <stdio.h>
#include <conio.h>

int main()
{
    // table of 5
    int arr[10];

    for (int i = 1; i <= 10; i++)
    {
        arr[i - 1] = 5 * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", arr[i - 1]);
    }

    return 0;
}