#include <stdio.h>
#include <conio.h>

int main()
{
    int len;
    printf("Enter length of array: ");
    scanf("%d", &len);

    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}