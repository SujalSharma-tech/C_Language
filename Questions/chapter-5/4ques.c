#include <stdio.h>
#include <conio.h>
int fib(int n);
int main()
{

    int n = 5;
    printf("the %d element of fib series is %d", n, fib(n));

    return 0;
}

int fib(int n)
{

    if (n == 1 || n == 0)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}