#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("enter age: ");
    scanf("%d", &a);
    (a >= 18) ? printf("You can cast vote") : printf("you cannot cast vote");
    return 0;
}