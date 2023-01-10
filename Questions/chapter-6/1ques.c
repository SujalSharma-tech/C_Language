#include <stdio.h>
#include <conio.h>

int main()
{
    // program to get address of variable
    int a = 15;
    int *b = &a;

    printf("The adress of variable a is %u\n", b);
    printf("The value of this adress  is %d\n", *b);

    return 0;
}