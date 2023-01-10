#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter a num: ");
    scanf("%d", &n);
    int fact = 1;
    for (int i = n; i; i--)
    {
        fact *= i;
    }
    printf("factorial of %d is : %d", n, fact);
    return 0;
}