#include <stdio.h>

int main()
{
    int dif, e_sum = 0, o_sum = 0;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            e_sum += arr[i];
        }
        else
        {
            o_sum += arr[i];
        }
    }

    dif = e_sum - o_sum;
    printf("The diff between the sum of the elements at even and odd indeces are %d\n", dif);

    return 0;
}