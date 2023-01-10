#include <stdio.h>
#include <conio.h>

int main()
{

    int n, sum, i = 0;
    printf("Enter a num: ");
    scanf("%d", &n);
    sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("The sum of first %d natural numbers is: %d", n, sum);
    return 0;
}