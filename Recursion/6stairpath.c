#include <stdio.h>
#include <conio.h>

int path(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }

    return path(n - 1) + path(n - 2);
}

int main()
{

    int n = 5;

    printf("no of ways are %d", path(n));

    return 0;
}