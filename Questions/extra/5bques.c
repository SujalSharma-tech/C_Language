#include <stdio.h>
#include <math.h>

float sqrtt(int n);
int main()
{

    // sqaure root of num

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("the square root of %d is %.2f", n, sqrtt(n));

    return 0;
}

float sqrtt(int n)
{

    return pow(n, 0.5);
}