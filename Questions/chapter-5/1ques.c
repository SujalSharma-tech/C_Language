#include <stdio.h>
#include <conio.h>
float avg(int a, int b, int c);
int main()
{

    int a = 3, b = 4, c = 5;

    printf("the average of %d,%d and %d is %.2f", a, b, c, avg(a, b, c));

    return 0;
}
float avg(int a, int b, int c)
{
    return (a + b + c) / 3;
}