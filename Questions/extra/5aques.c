#include <stdio.h>
#include <conio.h>

int sum(int s);

int main()
{
    // sum of digits of a number
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int summ = sum(n);
    printf("sum of digits is %d", summ);
    return 0;
}

int sum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int lastdig = n % 10;
        sum += lastdig;
        n = n / 10;
    }

    return sum;
}