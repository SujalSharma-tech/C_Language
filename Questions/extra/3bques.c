#include <stdio.h>
#include <conio.h>

int main()
{
    float m;
    int n;
    printf("Enter a number :");
    scanf("%f", &m);
    n = m;
    if (m == n && n >= 1)
    {
        printf("Given number is natural");
    }
    else
    {
        printf("Given number is not natural");
    }
    return 0;
}