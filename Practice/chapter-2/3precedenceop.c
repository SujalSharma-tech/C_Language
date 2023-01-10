#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 3;
    int b = 2;

    printf("The valus of 6*b/2*a is: %d \n", 6 * b / 2 * a);
    // 6*2/2*3
    // 12/2*3
    // 6*3=18 which is wrong
    printf("The valus of 6*b/2*a is: %d \n", (6 * b) / (2 * a));
    return 0;
}