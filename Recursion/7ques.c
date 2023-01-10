// pow function optimised approach

#include <stdio.h>
#include <conio.h>

int poww(int a, int b)
{

    if (b == 0)
    {
        return 1;
    }
    int x = poww(a, b / 2);
    if (b % 2 == 0)
    {
        return x * x;
    }
    else
    {
        return x * x * a;
    }
}

int main()
{

    int a = 3;
    int b = 0;

    printf("%d", poww(a, b));

    return 0;
}