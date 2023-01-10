#include <stdio.h>
#include <conio.h>
void check(int a);
int main()
{
    int l = 23;
    int *m = &l;

    printf("the address of l is %u\n", m);
    check(l);

    return 0;
}

void check(int a)
{
    int *m = &a;

    printf("the address of l inside fun is %u\n", m);
    // the value is diff because we pass the copy of varible not the exact variable
}