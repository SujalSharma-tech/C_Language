#include <stdio.h>
#include <conio.h>

int main()
{
    // average of three numbers

    float a, b, c, avg;
    printf("Enter first number : ");
    scanf("%f", &a);
    printf("Enter second number : ");
    scanf("%f", &b);
    printf("Enter third number : ");
    scanf("%f", &c);
    avg = (a + b + c) / 3;

    printf("Average of three numbers is : %.2f", avg);
    return 0;
}