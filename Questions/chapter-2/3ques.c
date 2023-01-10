#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter a number to check: \n");
    scanf("%d", &a);
    printf("the number is divisible by 97: %d \n", a % 97);
    return 0;
}