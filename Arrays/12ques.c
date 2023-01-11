#include <stdio.h>

int main()
{
    // Second largest element in array
    // using sorting

    int arr[6] = {10, 5, 7, 3, 9, 8};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The second largest element in the array is %d\n", arr[4]);
    return 0;
}