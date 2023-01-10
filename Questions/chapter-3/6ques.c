#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, d, lar, lar2;
    printf("Enter first digit: ");
    scanf("%d", &a);
    printf("Enter second digit: ");
    scanf("%d", &b);
    printf("Enter third digit: ");
    scanf("%d", &c);
    printf("Enter fourth digit: ");
    scanf("%d", &d);

    if (a > b)
    {
        lar = a;
    }
    else
    {
        lar = b;
    }
    if (c > d)
    {
        lar2 = c;
    }
    else
    {
        lar2 = d;
    }
    if (lar > lar2)
    {
        printf("%d is largest", lar);
    }
    else
    {
        printf("%d is largest", lar2);
    }
    return 0;
}