#include <stdio.h>
#include <conio.h>

int main()
{
    float income;
    printf("enter income in lacs: ");
    scanf("%f", &income);
    if (income >= 2.5 && income < 5.0)
    {
        printf("you have to pay 5% tax");
    }
    else if (income >= 5.0 && income < 10.0)
    {
        printf("you have to pay 20% tax");
    }
    else if (income >= 10.0)
    {
        printf("you have to pay 30% tax");
    }
    else
    {
        printf("no tax");
    }
    return 0;
}