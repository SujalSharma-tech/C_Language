#include <stdio.h>
#include <conio.h>

int main()
{

    int marks[4];
    int *ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("marks for student %d are : %d\n", i + 1, marks[i]);
    }

    return 0;
}