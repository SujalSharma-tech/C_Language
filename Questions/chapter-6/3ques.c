#include <stdio.h>
#include <conio.h>
void tentimes(int *a);
int main()
{

    // make the variable 10 times the original

    int a = 10;
    printf("the value of a before fun call is %d\n", a);
    tentimes(&a);
    printf("the value of a after fun call is %d\n", a);

    return 0;
}
void tentimes(int *a)
{

    *a = (*a) * (10);
}