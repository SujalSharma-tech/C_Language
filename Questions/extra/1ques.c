#include <stdio.h>
#include <conio.h>

int main()
{
    // perimeter of rectangle
    int per, l, b;
    printf("Enter length of rectangle in cm: ");
    scanf("%d", &l);
    printf("Enter breadth of rectangle in cm: ");
    scanf("%d", &b);
    per = 2 * (l + b);
    printf("The perimeter of rectangle is : %d cm\n", per);

    return 0;
}