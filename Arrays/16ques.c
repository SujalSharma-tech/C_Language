#include <stdio.h>

void rev(int arr[], int se, int ie)
{
    for (int i = se, j = ie; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main()
{
    int k;
    printf("Enter a number: ");
    scanf("%d", &k);

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    k = k % n;
    rev(arr, 0, 7 - 1);
    rev(arr, 0, k - 1);
    rev(arr, k, 7 - 1);

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
