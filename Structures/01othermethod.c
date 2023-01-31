#include <stdio.h>

int main()
{
    struct Students
    {
        int age;
        int phy;
        int che;
    } stu1, stu2; // we can declare here also

    stu1.age = 15;
    stu2.phy = 26;

    printf("%d\n", stu1.age);
    printf("%d\n", stu2.phy);

    return 0;
}