#include <stdio.h>
#include <conio.h>
int fact(int n);
int main()
{

    int n = 5;
    printf("factorial of %d is %d", n, fact(5));

    return 0;
}

int fact(int n)
{

    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}