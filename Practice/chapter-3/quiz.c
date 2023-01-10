#include <stdio.h>
#include <conio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("You got A grade");
    }
    else if (marks < 90 && marks >= 80)
    {
        printf("You got B grade");
    }
    else if (marks < 80 && marks >= 70)
    {
        printf("You got C grade");
    }
    else if (marks < 70 && marks >= 60)
    {
        printf("You got D grade");
    }
    else
    {
        printf("You did not passed the test");
    }

    return 0;
}