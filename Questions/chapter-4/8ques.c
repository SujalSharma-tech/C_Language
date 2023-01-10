#include <stdio.h>
#include <conio.h>

int main()
{
    int sum = 0;
    int i = 0;
    while (i <= 10)
    {
        sum += (i * 8);
        i++;
    }
    printf("sum is %d", sum);
    return 0;
}