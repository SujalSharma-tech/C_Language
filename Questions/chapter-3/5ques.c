#include <stdio.h>
#include <conio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if (a >= 97 && a <= 122)
    {
        printf("The entered character is lowercase");
    }
    else
    {
        printf("it is uppercase");
    }

    return 0;
}