#include <stdio.h>
#include <conio.h>

int main()
{
    // multiplication table for a given number n

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++)
    {

        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}