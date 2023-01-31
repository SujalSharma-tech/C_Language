#include <stdio.h>

int main()
{
    struct Student
    {
        int phy;
        int mth;
        int che;
        char grade;
    };

    struct Student stu1;
    stu1.phy = 50;
    stu1.mth = 80;
    stu1.che = 40;
    stu1.grade = 'A';

    struct Student stu2;
    stu2.phy = 23;
    stu2.mth = 83;
    stu2.che = 66;
    stu2.grade = 'B';

    // output

    printf("%d\n", stu1.phy);
    printf("%c\n", stu2.grade);

    // input from user

    printf("Enter phy grade for student 1: ");
    scanf("%d", &stu1.phy);

    printf("phy grade for student 1: %d\n", stu1.phy);

    return 0;
}