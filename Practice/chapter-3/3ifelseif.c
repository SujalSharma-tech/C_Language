#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter a num");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("num is 1");
    }
    else if (num == 2)
    {
        printf("num is 2");
    }
    else if (num == 3)
    {
        printf("num is 3");
    }
    else if (num == 0)
    {
        printf("num is 0");
    }
    else
    {
        printf("num is neither 0,1,2,3");
    }
    return 0;
}