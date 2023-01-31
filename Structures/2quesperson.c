#include <stdio.h>
#include <string.h>
int main()
{

    struct Person
    {
        char name[20];
        int salary;
        int age;
    } p1, p2;
    strcpy(p1.name, "Harsh");
    p2.age = 24;

    printf("Name of p1 is %s\n", p1.name);
    printf("Age of p2 is %d\n", p2.age);

    return 0;
}