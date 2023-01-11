#include <stdio.h>

int main()
{
    // count the number of elements in a given array greater than a given num

    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int arr[8] = {23, 64, 6, 3, 74, 8, 23, 53};

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > num)
        {
            count++;
        }
    }
    printf("The number of elements greater than %d are %d\n", num, count);
    return 0;
}