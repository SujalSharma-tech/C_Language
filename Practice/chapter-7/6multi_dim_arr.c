#include <stdio.h>
#include <conio.h>

int main()
{
    int n_students = 3;
    int n_marks = 2;

    int arr[n_students][n_marks]; // arr[3][2]

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_marks; j++)
        {
            printf("Enter marks of student %d in subject %d : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_marks; j++)
        {
            printf("marks of student %d in subject %d are : %d\n", i + 1, j + 1, arr[i][j]);
        }
    }

    return 0;
}