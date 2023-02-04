#include <stdio.h>
#include <string.h>
typedef struct student
{
    int phy;
    int mth;
    int che;
    char name[20];
} student;

void change(student *ptr)
{

    //-> is same as *ptr.

    ptr->che = 70;
    ptr->mth = 80;
    ptr->phy = 90;
}
int main()
{
    student stu1;
    stu1.che = 64;
    stu1.mth = 90;
    stu1.phy = 87;
    strcpy(stu1.name, "Harsh");
    printf("che = %d\n", stu1.che);
    printf("mth = %d\n", stu1.mth);
    printf("phy = %d\n", stu1.phy);
    printf("name = %s\n", stu1.name);

    change(&stu1);

    printf("che = %d\n", stu1.che);
    printf("mth = %d\n", stu1.mth);
    printf("phy = %d\n", stu1.phy);
    printf("name = %s\n", stu1.name);

    return 0;
}