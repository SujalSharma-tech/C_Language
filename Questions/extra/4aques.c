#include <stdio.h>
#include <conio.h>

int main()
{
    // pattern
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}