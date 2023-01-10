#include <stdio.h>
#include <conio.h>

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0 || (year % 400 == 0 && year % 100 != 0))
    {
        printf("entered year is leap");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}