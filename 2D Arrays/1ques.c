#include <stdio.h>

int main()
{
    // program to store roll no and marks
    int st, mrks, roll;

    printf("Enter number of students: ");
    scanf("%d", &st);

    int arr[st][2];

    for (int i = 0; i < st; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < st; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}