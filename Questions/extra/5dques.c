#include <stdio.h>
#include <conio.h>

float poww(int a, int b);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%.f", poww(n, 3));

    return 0;
}

float poww(int a, int b)
{
    int res = 1;

    for (int i = 1; i <= b; i++)
    {
        res *= a;
    }

    return res;
}
