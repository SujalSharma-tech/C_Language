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

    int *ptr = &stu1.phy;
    int *ptr2 = &stu1.mth;
    int *ptr3 = &stu1.che;

    printf("%p\n", ptr);
    printf("%p\n", ptr2);
    printf("%p\n", ptr3);
    ptr3++;
    printf("%c\n", *ptr3);

    int *ptr4 = &stu2.phy;
    printf("%p\n", ptr4);
    ptr4++;
    printf("%p\n", ptr4);
    return 0;
}