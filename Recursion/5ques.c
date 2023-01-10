// make a pow fun using recursion

#include <stdio.h>
#include <conio.h>

int poww(int a, int b)
{

    if (b == 1)
    {
        return a;
    }
    return a * poww(a, b - 1);
}

int main()
{
    int a = 5, b = 5;
    printf("%d", poww(a, b));

    return 0;
}