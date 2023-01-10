#include <stdio.h>
#include <conio.h>
void pattern(int n);

int main()
{
    // pattern
    int n = 5;
    pattern(n);
    return 0;
}

void pattern(int n)
{

    int m = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= m; j++)
        {
            printf("* ");
        }
        printf("\n");
        m += 2;
    }
}