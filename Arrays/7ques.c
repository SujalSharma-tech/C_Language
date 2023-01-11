#include <stdio.h>

int main()
{
    // increment even index by 10 and change odd index by second multiple

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    for (int i = 0; i < 8; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += 10;
        }
        else
        {
            arr[i] *= 2;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}