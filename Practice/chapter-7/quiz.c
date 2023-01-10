#include <stdio.h>
#include <conio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("%d", i);
        printf("Enter marks of student %d: ", (i + 1));
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("marks of student %d are: %d\n", i + 1, marks[i]);
    }
    return 0;
}