#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp != 0)
    {
        int t = temp % 10;
        sum += t;
        temp /= 10;
    }

    printf("sum is %d", sum);
    return 0;
}