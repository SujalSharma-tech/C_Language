#include <stdio.h>

int main()
{
    int arr[8] = {1, 3, 2, 4, 5, 2, 7, 4};

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("element %d is dupliacte\n", arr[i]);
            }
        }
    }
    return 0;
}