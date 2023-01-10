#include <stdio.h>
#include <conio.h>

int main()
{
    // digit checker
    char n;
    printf("Enter a number :");
    scanf("%c", &n);

    if (n >= 49 && n <= 57)
    {
        printf("The given character is a digit");
    }
    else
    {
        printf("The given char is not a digit");
    }

    return 0;
}