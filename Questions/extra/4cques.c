#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, flag = 0;
    printf("Enter starting number: ");
    scanf("%d", &a);
    printf("Enter ending number: ");
    scanf("%d", &b);
    for (int i = a; i <= b; i++)
    {

        for (int j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}