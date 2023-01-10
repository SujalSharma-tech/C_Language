#include <stdio.h>
#include <conio.h>

int main()
{
    // first n natual numbers
    int c;
    printf("Enter a number: ");
    scanf("%d", &c);

    for (int i = 0; i <= c; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}