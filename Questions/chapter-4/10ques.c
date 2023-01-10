#include <stdio.h>
#include <conio.h>

int main()
{
    // prime check

    int n;
    int flag = 0;
    printf("Enter a num: ");
    scanf("%d", &n);
    int sc = (n / 2);
    if (n == 2 || n == 1)
    {
        printf("given num is prime");
    }
    else
    {
        for (int i = 2; i <= sc; i++)
        {

            if (n % i == 0)
            {

                flag = 1;
                break;
            }
            else
            {

                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("not prime");
        }
        else
        {
            printf("given num is prime");
        }
    }

    return 0;
}