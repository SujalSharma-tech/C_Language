#include <stdio.h>
#include <conio.h>

void pos_int(int arr[], int n)
{

    int cont = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            cont += 1;
        }
    }
    printf("%d", cont);
}
int main()
{

    int arr[] = {1, 45, -45, 34, -3, -54, -34, 35, 43};
    pos_int(arr, 9);

    return 0;
}