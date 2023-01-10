#include <stdio.h>
#include <math.h>

int main()
{
    // armstrong number

    int n, len;
    printf("Enter a number :");
    scanf("%d", &n);
    int temp = n;
    int temp2 = n;
    len = 0;
    while (temp != 0)
    {
        len += 1;
        temp = temp / 10;
    }
    int last;
    float res = 0;

    while (n != 0)
    {
        last = n % 10;
        res = res + (pow(last, len));
        n = n / 10;
    }
    if (res == temp2)
    {
        printf("The given number is armstrong");
    }
    else
    {
        printf("Given number is not armstrong");
    }

    return 0;
}