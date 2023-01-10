#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("enter a num");
    scanf("%d", &a);
    (a < 5) ? printf("num is less than 5") : printf("num is greater than 5");
    return 0;
}