#include <stdio.h>
#include <string.h>
typedef struct Student_Data
{
    int Roll_No;
    char Department[20];
    char Course[20];
    int year;

} Student_Data;

int Dept_Check(Student_Data A, Student_Data B)
{
    return strcmp(A.Department, B.Department);
}

int main()
{

    Student_Data stu1, stu2;

    stu1.Roll_No = 50;
    strcpy(stu1.Department, "Engineering");
    strcpy(stu1.Course, "CSE");
    stu1.year = 2022;

    stu2.Roll_No = 45;
    strcpy(stu2.Department, "Engineering");
    strcpy(stu2.Course, "ECE");
    stu2.year = 2021;
    // printf("%d", Dept_Check(stu1, stu2));
    if (Dept_Check(stu1, stu2) == 0)
    {
        printf("Department is same");
    }
    else
    {
        printf("Department is different");
    }

    return 0;
}