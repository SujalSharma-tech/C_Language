#include <stdio.h>
typedef struct student
{
    int phy;
    int mth;
    int che;
} student;
int main()
{
    student stu1;
    stu1.phy = 2 0;
    stu1.mth = 10;
    student *ptr = &stu1;
    // int *ptr = &stu1.phy;
    // int *ptr2 = &stu1.mth;
    printf("%d\n", *ptr);
    // printf("%d\n", *ptr2);

    return 0;
}