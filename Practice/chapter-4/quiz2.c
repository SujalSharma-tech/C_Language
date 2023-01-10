#include <stdio.h>
#include <conio.h>

int main()
{
    // first n natual numbers in reverse
    int c;
    printf("Enter a number: ");
    scanf("%d", &c);

    for (int i = c; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}