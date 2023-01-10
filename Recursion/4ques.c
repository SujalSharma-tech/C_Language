// sum from 1 to n

#include <stdio.h>
#include <conio.h>

int sum(int n)
{

    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int main()
{

    int n = 10;
    printf("%d", sum(n));

    return 0;
}