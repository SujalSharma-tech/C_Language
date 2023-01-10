#include <stdio.h>
#include <conio.h>
int sum(int a, int b);
int main()
{
    int a = 2, b = 7;
    printf("the sum of %d and %d is %d", a, b, sum(a, b));

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}