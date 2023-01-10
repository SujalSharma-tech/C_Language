#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Enter a number :");
    scanf("%d", &a);
    printf("Enter a number :");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is smallest\n", b);
    }
    else if (a == b)
    {
        printf("both are equal");
    }

    else
    {
        printf("%d is smallest\n", a);
    }

    return 0;
}
