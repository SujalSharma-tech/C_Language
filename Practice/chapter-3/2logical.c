#include <stdio.h>
#include <conio.h>

int main()
{
    int age, vip;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age < 18 || age > 70)
    {
        printf("Do you have vip card? 0 for no and 1 for yes: ");
        scanf("%d", &vip);
    }

    if ((age >= 18 && age <= 70) || vip == 1)
    {
        printf("You can drive");
    }
    else
    {
        printf("You cannot drive");
    }
    return 0;
}