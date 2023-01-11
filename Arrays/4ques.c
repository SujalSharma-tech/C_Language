#include <stdio.h>

int main()
{
    // product of elements of an array

    int arr[5] = {1, 2, 3, 4, 5};
    int pro = 1;
    for (int i = 0; i < 5; i++)
    {
        pro *= arr[i];
    }
    printf("The product of elements of arrays is %d\n", pro);
    return 0;
}