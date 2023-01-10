#include <stdio.h>
#include <conio.h>
int sum(int n);
int main()
{
    int n = 5;
    printf("the sum of first %d natrual numbers is %d", n, sum(n));

    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return sum(n - 1) + n;
    }
}