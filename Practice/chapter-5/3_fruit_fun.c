#include <stdio.h>
#include <conio.h>
int sum(int a, int b);
int main()
{

    int res;
    res = sum(2, 3);
    printf("%d", res);

    return 0;
}

int sum(int a, int b)
{

    return a + b;
}