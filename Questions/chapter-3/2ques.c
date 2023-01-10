#include <stdio.h>
#include <conio.h>

int main()
{
    int marks, phy, maths, chem;
    printf("Enter phy marks: ");
    scanf("%d", &phy);
    printf("Enter maths marks: ");
    scanf("%d", &maths);
    printf("Enter chem marks: ");
    scanf("%d", &chem);
    marks = (phy + chem + maths) / 3;

    if (marks >= 40 && (phy > 33 && maths > 33 && chem > 33))
    {
        printf("you are passed");
    }
    else
    {
        printf("you are failed");
    }

    return 0;
}