#include <stdio.h>
#include <string.h>
int main()
{

    typedef struct Student
    {
        char name[15];
        int phy;
        int che;
        int mth;
    } Student;

    Student A, B;
    strcpy(A.name, "Aman");
    A.che = 70;
    A.phy = 50;
    A.mth = 80;

    B = A; // Deep Copy is made here
    printf("%s\n", B.name);

    return 0;
}