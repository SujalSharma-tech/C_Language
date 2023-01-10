#include <stdio.h>
#include <conio.h>

int main()
{

    int n, sum;
    printf("Enter a num: ");
    scanf("%d", &n);
    sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of first %d natural numbers is: %d", n, sum);
    return 0;
}